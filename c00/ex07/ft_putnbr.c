/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:42:51 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/24 08:55:40 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_pow10(int n)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < n)
	{
		result = result * 10;
		i++;
	}
	return (result);
}

void	ft_putposnbr(int nb)
{
	int		temp;
	int		i;
	char	x;

	i = 0;
	temp = nb;
	while (temp != 0)
	{
		temp = temp / 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		x = (nb / ft_pow10(i)) + '0';
		nb = nb % ft_pow10(i);
		write(1, &x, 1);
	}	
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		ft_putposnbr(nb);
	}
}

/*
int	main(void)
{
	ft_putnbr(12345);
	ft_putnbr(0);
	ft_putnbr(-12345);
	return (0);
}
*/
