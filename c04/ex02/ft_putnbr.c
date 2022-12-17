/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 10:08:12 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/01 08:51:30 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
int	main(void)
{
	ft_putnbr(12345);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-6789);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	return (0);
}
*/
