/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:07:27 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/07 13:23:15 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_is_prime(long nb)
{
	long	i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long	lnb;

	lnb = nb;
	while (!ft_is_prime(lnb++))
		continue ;
	return (lnb - 1);
}

/*
int	main(void)
{
	int		n;
	int		i;
	char	buffer[100];

	n = ft_find_next_prime(74);
	i = 0;
	while (n > 0)
	{
		buffer[i++] = n % 10 + '0';
		n /= 10;
	}
	while (i > 0)
		write(1, &buffer[--i], 1);
	return (0);
}
*/
