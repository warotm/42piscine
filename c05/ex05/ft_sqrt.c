/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 08:56:13 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/07 12:06:09 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_sqrt(int nb)
{
	long	lnb;
	long	i;

	if (nb < 1)
		return (0);
	i = 1;
	lnb = nb;
	while (i * i < lnb)
		i++;
	if (i * i == lnb)
		return (i);
	return (0);
}

/*
int	main(void)
{
	int		n;
	int		i;
	char	buffer[100];

	n = ft_sqrt(2077262929);
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
