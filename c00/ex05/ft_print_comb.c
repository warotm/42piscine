/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:31:24 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/24 08:53:17 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_number(int i, int j, int k)
{
	char	x;

	x = i + '0';
	write(1, &x, 1);
	x = j + '0';
	write(1, &x, 1);
	x = k + '0';
	write(1, &x, 1);
	if (!(i == 7 & j == 8 & k == 9))
	{
		x = ',';
		write(1, &x, 1);
		x = ' ';
		write(1, &x, 1);
	}
}

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;
			while (k < 10)
			{
				if (i < j & j < k & i < k)
					ft_print_number(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
