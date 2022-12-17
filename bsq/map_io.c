/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmclean <bmclean@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:40:10 by bmclean           #+#    #+#             */
/*   Updated: 2022/12/13 16:05:21 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

//map formatting
extern int	g_map_nrows;
extern int	g_map_ncols;
extern char	g_empty_char;
extern char	g_obstacle_char;
extern char	g_full_char;

//map data
extern char	*g_map_data;
extern char	*g_map_list[500];

//storage for map data
extern char	*g_map_data;

char	*idx(char *map_data, int row, int col);
char	*read_str_from_file(char *filename);
int		check_chars_are_unique(void);
int		check_char_is_printable(char c);
void	output_map(char *data);

/*reads header information to set nrows, and empty / obstacle / full chars*/
int	set_map_information(char *str)
{
	char	*ptr;

	ptr = str;
	g_map_nrows = 0;
	while (*ptr != '\n')
	{
		ptr++;
		if (!*ptr)
			return (0);
	}
	g_full_char = *(--ptr);
	g_obstacle_char = *(--ptr);
	g_empty_char = *(--ptr);
	while (*str >= '0' && *str <= '9' && str != ptr)
		g_map_nrows = (g_map_nrows * 10) + (*str++ - '0');
	if (str != ptr)
		return (0);
	if (!check_char_is_printable(g_empty_char)
		|| !check_char_is_printable(g_obstacle_char)
		|| !check_char_is_printable(g_full_char))
		return (0);
	if (!check_chars_are_unique())
		return (0);
	return (1);
}

/*set the number of characters referenced from the first line of map data*/
int	set_map_data_set_ncols(char **ptr)
{
	int		i;
	char	*str;

	str = *ptr;
	while (*str != '\n' && *str)
		str++;
	str++;
	*ptr = str;
	i = 0;
	while (str[i] != '\n' && *str)
		i++;
	if (i == 0)
		return (0);
	g_map_ncols = i;
	return (1);
}

/*set map data while checking for bad maps, excess/less lines/characters*/
int	set_map_data_set_map_data(char **ptr)
{
	char	*str;
	int		i;
	char	*map_ptr;

	str = (*ptr) - 1;
	map_ptr = g_map_data;
	i = 0;
	while (*++str)
	{
		if (*str != '\n')
		{
			if (i < g_map_nrows * g_map_ncols
				&& *str != g_empty_char && *str != g_obstacle_char)
				return (0);
			*map_ptr++ = *str;
			i++;
		}
		else
			if (i % g_map_ncols != 0)
				return (0);
	}
	if (i != g_map_nrows * g_map_ncols)
		return (0);
	*map_ptr = '\0';
	return (1);
}

/* call related set-map functions, and free memory if something wrong*/
int	set_map_data(char *str)
{
	if (!set_map_data_set_ncols(&str))
		return (0);
	g_map_data = malloc(sizeof(char) * g_map_nrows * g_map_ncols + 1);
	if (!set_map_data_set_map_data(&str))
	{
		free(g_map_data);
		return (0);
	}
	return (1);
}

/* get map fuction that call read-file function and set-map-data*/
int	get_map_from_file(char *filename)
{
	char	*str;

	str = read_str_from_file(filename);
	if (!str)
		return (0);
	if (!set_map_information(str) || !set_map_data(str))
	{
		free(str);
		return (0);
	}
	free(str);
	return (1);
}
