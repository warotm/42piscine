/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_41.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:08:43 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/04 19:14:48 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_line( char grid[6][6], int x, int y, char *iterstr);
int		*get_iterator(char *iterstr);
char	*concat(char *input, char *iterstr);

void	check_41_all(char grid[6][6])
{
	int	x;
	int	y;

	y = 0;
	while (y < 6)
	{
		x = 0;
		while (x < 6)
		{
			if ((x == 0) && (grid[x][y] == '4'))
				write_line(grid, x, y, concat("1234", "+0"));
			if ((x == 5) && (grid[x][y] == '4'))
				write_line(grid, x, y, concat("1234", "-0"));
			if ((y == 0) && (grid[x][y] == '4'))
				write_line(grid, x, y, concat("1234", "0+"));
			if ((y == 5) && (grid[x][y] == '4'))
				write_line(grid, x, y, concat("1234", "0-"));
			x++;
		}
		y++;
	}
}
