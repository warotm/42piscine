/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmclean <bmclean@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:40:10 by bmclean           #+#    #+#             */
/*   Updated: 2022/12/08 15:36:27 by wmakaran         ###   ########.fr       */
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

//struct square identifies a square with top-left coordinate
//of (row, col), and sides of length side_len
struct s_square{
	int	row;
	int	col;
	int	side_len;
};

//declare functions from other files
struct s_square	find_best_square_at_loc(int row, int col);

int	check_chars_are_unique(void)
{
	if (g_empty_char == g_obstacle_char
		|| g_empty_char == g_full_char
		|| g_obstacle_char == g_full_char)
		return (0);
	else
		return (1);
}

/*Starts at location (0,0) and iterates across columns, then down
rows. At each location, uses function find_best_square_at_loc
(in square.c) to test for the largest square that fits.*/
struct s_square	find_biggest_square(void)
{
	int				row;
	int				col;
	struct s_square	biggest_square;
	struct s_square	test_square;

	row = 0;
	biggest_square = find_best_square_at_loc(0, 0);
	while (row < g_map_nrows)
	{
		col = 0;
		while (col < g_map_ncols)
		{
			test_square = find_best_square_at_loc(row, col);
			if (test_square.side_len > biggest_square.side_len)
				biggest_square = test_square;
			col++;
		}
		row++;
	}
	return (biggest_square);
}
