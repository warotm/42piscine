/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmclean <bmclean@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:40:10 by bmclean           #+#    #+#             */
/*   Updated: 2022/12/14 12:50:41 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

//store map names in here:
extern char	*g_map_list[500];

/*Take a string of map filenames (sourced from argv or standart input),
and write each filename to the globval variable g_map_list for later use.*/
int	assign_filenames_to_maplist(char *str)
{
	int		n_maps;
	char	*str_ptr;
	int		i;

	n_maps = 0;
	str_ptr = str;
	while (*str_ptr)
	{
		i = 0;
		while (str_ptr[i] != ' ' && str_ptr[i])
			i++;
		g_map_list[n_maps] = malloc(sizeof(char) * i);
		i = 0;
		while (str_ptr[i] != ' ' && str_ptr[i])
		{
			g_map_list[n_maps][i] = str_ptr[i];
			i++;
		}
		n_maps++;
		str_ptr = str_ptr + i + 1;
	}
	return (n_maps);
}

/*read map names(s) from standard input into str, send str
to assign_filenames_to_maplist(), and rtn n_maps*/
int	get_map_list_from_standard_input(void)
{
	char	*str;
	char	*str_ptr;
	int		nmaps;
	char	c;

	str = malloc(sizeof(char) * 1000);
	str_ptr = str;
	while (1)
	{
		read(1, &c, 1);
		if (c == '\n')
			break ;
		else
		{
			*str_ptr = c;
			str_ptr++;
		}
		*str_ptr = '\0';
		nmaps = assign_filenames_to_maplist(str);
	}
	free(str);
	return (nmaps);
}

//read map names(s) from argv into map_list
int	get_map_list_from_argv(int argc, char *argv[])
{
	int	n_maps;
	int	i;

	n_maps = argc - 1;
	i = 0;
	while (i < n_maps)
	{
		g_map_list[i] = argv[i + 1];
		i++;
	}
	return (n_maps);
}

/*top-level function for reading in map file names from argv or
standard input*/
int	get_map_list(int argc, char *argv[])
{
	int	n_maps;

	if (argc == 1)
		n_maps = get_map_list_from_standard_input();
	else
		n_maps = get_map_list_from_argv(argc, argv);
	if (n_maps == 0)
	{
		write(1, "map error\n", 10);
		exit(1);
	}
	else
		return (n_maps);
}
