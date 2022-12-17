/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_23.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:26:09 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/04 19:27:05 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_line( char grid[6][6], int x, int y, char *iterstr);
int		*get_iterator(char *iterstr);
char	*concat(char *input, char *iterstr);

void	check_23(char grid[6][6], int x, int y, char *iterstr)
{
	int	*iter;

	iter = get_iterator(iterstr);
	if (grid[x][y] == '2' && grid[x + (iter[0] * 5)][y + (iter[1] * 5)] == '3')
	{
		if ((grid[x + iter[0]][y + iter[1]] == '1')
			|| (grid[x + (4 * iter[0])][y + (4 * iter[1])] == '2'))
			write_line(grid, x, y, concat("1432", iterstr));
		else if ((grid[x + iter[0]][y + iter[1]] == '3')
			|| (grid[x + (3 * iter[0])][y + (3 * iter[1])] == '2'))
			write_line(grid, x, y, concat("3421", iterstr));
		else if (grid[x + iter[0]][y + iter[1]] == '2')
			write_line(grid, x, y, concat("2431", iterstr));
		else
			grid[x + (2 * iter[0])][y + (2 * iter[1])] = '4';
	}
}

void	check_23_all(char grid[6][6])
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
				check_23(grid, x, y, "+0");
			if (x == 5)
				check_23(grid, x, y, "-0");
			if (y == 0)
				check_23(grid, x, y, "0+");
			if (y == 5)
				check_23(grid, x, y, "0-");
			x++;
		}
		y++;
	}
}
