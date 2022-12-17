/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:15:50 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/09 08:25:28 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*output;

	output = malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		output[i] = f(tab[i]);
		i++;
	}
	return (output);
}

/*
#include<unistd.h>

int	ft_plus1(int nb)
{
	return (nb + 1);
}

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
	int	*output;
	int	i;

	output = ft_map(tab, 3, &ft_plus1);
	i = 0;
	while (i < 3)
	{
		ft_putnbr(output[i]);
		i++;
	}
	return (0);
}
*/
