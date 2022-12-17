/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 09:51:22 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/08 14:18:19 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_is_prime(int nb)
{
	long	i;
	long	lnb;

	lnb = nb;
	if (lnb <= 1)
		return (0);
	if (lnb <= 3)
		return (1);
	if (lnb % 2 == 0 || lnb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= lnb)
	{
		if (lnb % i == 0 || lnb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

/*
int	main(void)
{
	if (ft_is_prime(2147483647))
		write(1, "It's prime", 10);
	else
		write(1, "It's not prime", 14);
}
*/
