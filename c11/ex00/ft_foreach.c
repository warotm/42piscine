/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:06:25 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/09 08:15:32 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
#include<unistd.h>

void	ft_putnbr(int nb)
{
	char	buffer[100];
	int		is_neg;
	int		i;
	long	lnb;

	lnb = nb;
	if (lnb == 0)
		write(1, "0", 1);
	if (lnb < 0)
	{
		is_neg = 1;
		lnb = lnb * -1;
	}
	else
		is_neg = 0;
	i = 0;
	while (lnb > 0)
	{
		buffer[i++] = (lnb % 10) + '0';
		lnb = lnb / 10;
	}
	if (is_neg == 1)
		write(1, "-", 1);
	while (i > 0)
		write(1, &buffer[--i], 1);
}

int	main(void)
{
	int	tab[] = {123, 456, 789};

	ft_foreach(tab, 3, &ft_putnbr);
	return (0);
}
*/
