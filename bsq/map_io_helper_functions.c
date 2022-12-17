/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmclean <bmclean@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:40:10 by bmclean           #+#    #+#             */
/*   Updated: 2022/12/13 15:00:27 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

//map formatting
extern int	g_map_nrows;
extern int	g_map_ncols;
extern char	g_empty_char;
extern char	g_obstacle_char;
extern char	g_full_char;

//map data
extern char	*g_map_data;
extern char	*g_map_list[500];

//func for indexing char array by row and column
//works for both reading and writing, to and from input and output maps...
char	*idx(char *map_data, int row, int col)
{
	return (&map_data[row * g_map_ncols + col]);
}

/*ensures empty / obstacle / full character is within printable range*/
int	check_char_is_printable(char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

/*draw map to standard output*/
void	output_map(char *data)
{
	int	row;
	int	col;

	row = 0;
	while (row < g_map_nrows)
	{
		col = 0;
		while (col < g_map_ncols)
		{
			write(1, idx(data, row, col), 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
	write(1, "\n", 1);
}

/*read file, return as string pointer*/
char	*read_str_from_file(char *filename)
{
	int		fd;
	int		ret;
	char	*str;
	char	buffer[2001];
	int		str_length;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);
	str_length = 0;
	while (1)
	{
		ret = read(fd, buffer, 2000);
		if (ret != 0)
			str_length += ret;
		else
			break ;
	}
	close(fd);
	str = malloc(sizeof(char) * (str_length + 1));
	fd = open(filename, O_RDONLY);
	ret = read(fd, str, str_length);
	str[ret] = '\0';
	return (str);
}
