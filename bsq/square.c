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

//map_io
char	*idx(char *map_data, int row, int col);

//struct square identifies a square with top-left coordinate of (row, col),
//and sides of length side_len
struct	s_square{
	int	row;
	int	col;
	int	side_len;
};

/*find_best_square starts at a given (row,col) and iteratively tests
incrementally-larger squares. If no obstacle character is encountered,
the function moves on to test the next-biggest square, until such
time as an obstacle character is encountered, OR the square finds
the edge of the map.*/
struct s_square	find_best_square(struct s_square mysquare)
{
	int	r;
	int	c;
	int	row;
	int	col;

	row = mysquare.row;
	col = mysquare.col;
	while (1)
	{
		r = 0;
		while (r < mysquare.side_len + 1)
		{
			c = 0;
			while (c < mysquare.side_len + 1)
			{
				if (*idx(g_map_data, row + r, col + c) == g_obstacle_char
					|| row + r > g_map_nrows - 1
					|| col + c > g_map_ncols - 1)
					return (mysquare);
				c++;
			}
			r++;
		}
		mysquare.side_len++;
	}
}

/*find_best_square_at_loc seeks the largest square possible that has a
top-left corner at (row,col), using the find_best_square function. */
struct s_square	find_best_square_at_loc(int row, int col)
{
	struct s_square	mysquare;

	mysquare.row = row;
	mysquare.col = col;
	mysquare.side_len = 0;
	if (*idx(g_map_data, row, col) == g_obstacle_char)
		mysquare.side_len = 0;
	else
	{
		mysquare = find_best_square(mysquare);
	}
	return (mysquare);
}

void	write_square(struct s_square my_square)
{
	int	r;
	int	c;

	r = 0;
	c = 0;
	while (r < my_square.side_len)
	{
		c = 0;
		while (c < my_square.side_len)
		{
			*idx(g_map_data, my_square.row + r, my_square.col + c)
			= g_full_char;
			c++;
		}
		r++;
	}
}
