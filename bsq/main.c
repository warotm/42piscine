/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmclean <bmclean@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:40:10 by bmclean           #+#    #+#             */
/*   Updated: 2022/12/08 15:30:10 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//includes
//********
#include <unistd.h>

//global variables
//****************

//map formatting
int		g_map_nrows;
int		g_map_ncols;
char	g_empty_char;
char	g_obstacle_char;
char	g_full_char;

//map data
char	*g_map_data;
char	*g_map_list[500];

//square.c
struct s_square{
	int	row;
	int	col;
	int	side_len;
};

//functions from other files
//**************************

//read_map_names.c
int				get_map_list_from_standard_input(void);
int				get_map_list_from_argv(int argc, char *argv[]);

//map_io
int				check_chars_are_unique(void);
int				*get_map_from_file(char *filename);
void			output_map(char *data);
int				get_map_list(int argc, char *argv[]);

//square.c
struct s_square	find_best_square_at_loc(int row, int col);
void			write_square(struct s_square my_square);

//map_comparisons.c
struct s_square	find_biggest_square(void);

int	main(int argc, char *argv[])
{
	int				n_maps;
	int				map;
	struct s_square	biggest_square;

	map = 0;
	n_maps = get_map_list(argc, argv);
	while (map < n_maps)
	{
		if (get_map_from_file(g_map_list[map]) != 0)
		{
			biggest_square = find_biggest_square();
			write_square(biggest_square);
			output_map(g_map_data);
		}
		else
			write(1, "map error\n", 10);
		map++;
	}
	return (0);
}
