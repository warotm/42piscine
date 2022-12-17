/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_13.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:24:01 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/04 19:25:14 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_line( char grid[6][6], int x, int y, char *iterstr);
int		*get_iterator(char *iterstr);
char	*concat(char *input, char *iterstr);

void	check_13(char grid[6][6], int x, int y, char *iterstr)
{		
	int	*iter;

	iter = get_iterator(iterstr);
	if (grid[x][y] == '1' && grid[x + (iter[0] * 5)][y + (iter[1] * 5)] == '3')
	{
		if (grid[x + (2 * iter[0])][y + (2 * iter[1])] == '1')
			write_line(grid, x, y, concat("4132", iterstr));
		if ((grid[x + (2 * iter[0])][y + (2 * iter[1])] == '2')
			|| (grid[x + (4 * iter[0])][y + (4 * iter[1])] == '1'))
			write_line(grid, x, y, concat("4231", iterstr));
		if ((grid[x + (2 * iter[0])][y + (2 * iter[1])] == '3')
			|| (grid[x + (3 * iter[0])][y + (3 * iter[1])] == '1'))
			write_line(grid, x, y, concat("4312", iterstr));
	}
}

void	check_13_all(char grid[6][6])
{
	int	x;
	int	y;

	y = 0;
	while (y < 6)
	{
		x = 0;
		while (x < 6)
		{
			if (x == 0)
				check_13(grid, x, y, "+0");
			if (x == 5)
				check_13(grid, x, y, "-0");
			if (y == 0)
				check_13(grid, x, y, "0+");
			if (y == 5)
				check_13(grid, x, y, "0-");
			x++;
		}
		y++;
	}
}
