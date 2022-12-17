/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_22.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:21:44 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/04 20:27:20 by ivanderw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_line( char grid[6][6], int x, int y, char *iterstr);
int		*get_iterator(char *iterstr);
char	*concat(char *input, char *iterstr);

void	check_22(char grid[6][6], int x, int y, char *iterstr)
{
	int	*iter;

	iter = get_iterator(iterstr);
	if (grid[x][y] == '2' && grid[x + (iter[0] * 5)][y + (iter[1] * 5)] == '2')
	{
		if (grid[x + iter[0]][y + iter[1]] == '1')
			write_line(grid, x, y, concat("1423", iterstr));
		if (grid[x + iter[0]][y + iter[1]] == '2')
			if ((grid[x + (2 * iter[0])][y + (2 * iter[1])] == '1')
			|| (grid[x + (3 * iter[0])][y + (3 * iter[1])] == '4'))
				write_line(grid, x, y, concat("2143", iterstr));
		if ((grid[x + iter[0]][y + iter[1]] == '3') &&
				(grid[x + (2 * iter[0])][y + (2 * iter[1])] == '4'
				|| grid[x + (3 * iter[0])][y + (3 * iter[1])] == '1'
				|| grid[x + (4 * iter[0])][y + (4 * iter[1])] == '2'))
			write_line(grid, x, y, concat("3412", iterstr));
		else if ((grid[x + iter[0]][y + iter[1]] == '3') &&
				(grid[x + (2 * iter[0])][y + (2 * iter[1])] == '2'
				|| grid[x + (3 * iter[0])][y + (3 * iter[1])] == '4'
				|| grid[x + (4 * iter[0])][y + (4 * iter[1])] == '1'))
			write_line(grid, x, y, concat("3241", iterstr));
	}
}

void	check_22_all(char grid[6][6])
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
				check_22(grid, x, y, "+0");
			if (x == 5)
				check_22(grid, x, y, "-0");
			if (y == 0)
				check_22(grid, x, y, "0+");
			if (y == 5)
				check_22(grid, x, y, "0-");
			x++;
		}
		y++;
	}
}
