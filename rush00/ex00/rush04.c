/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 10:50:07 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/27 10:50:51 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_corner_handler(int x, int y, int i, int j)
{
	if (i == 0 & j == 0)
		ft_putchar ('A');
	else if (i == 0 & j == (x - 1))
		ft_putchar ('C');
	else if (i == (y - 1) & j == 0)
		ft_putchar ('C');
	else if (i == (y - 1) & j == (x - 1))
		ft_putchar ('A');
	else
		return (0);
	return (1);
}

int	ft_edge_handler(int x, int y, int i, int j)
{
	if (i == 0 | i == (y - 1))
		ft_putchar ('B');
	else if (j == 0 | j == (x - 1))
		ft_putchar ('B');
	else
		return (0);
	return (1);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (!ft_corner_handler(x, y, i, j))
				if (!ft_edge_handler(x, y, i, j))
					ft_putchar (' ');
			j++;
		}
		ft_putchar ('\n');
		i++;
	}
}
