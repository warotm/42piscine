/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:38:30 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/04 18:27:45 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_inside_box(int bound, char grid[6][6])
{
	int		x;
	int		y;

	y = 1;
	while (y < bound - 1)
	{
		x = 1;
		while (x < bound - 1)
		{
			write(1, &grid[x][y], 1);
			write(1, " ", 1);
			x++;
		}
		write(1, "\n", 1);
	y++;
	}
}

void	print_box(int bound, char grid[6][6])
{
	int		x;
	int		y;

	y = 0;
	while (y < bound)
	{
		x = 0;
		while (x < bound)
		{
			write(1, &grid[x][y], 1);
			write(1, " ", 1);
			x++;
		}
		write(1, "\n", 1);
	y++;
	}
}
