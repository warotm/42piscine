/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:04:59 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/24 08:54:38 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_number(int i, int j)
{
	char	x;

	x = (i / 10) + '0';
	write(1, &x, 1);
	x = (i % 10) + '0';
	write(1, &x, 1);
	x = ' ';
	write(1, &x, 1);
	x = (j / 10) + '0';
	write(1, &x, 1);
	x = (j % 10) + '0';
	write(1, &x, 1);
	if (!(i == 98 & j == 99))
	{
		x = ',';
		write(1, &x, 1);
		x = ' ';
		write(1, &x, 1);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_print_number(i, j);
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
