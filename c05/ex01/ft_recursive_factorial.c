/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:09:17 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/29 16:13:10 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * (ft_recursive_factorial(nb - 1)));
}

/*
int	main(void)
{
	int		n;
	int		i;
	char	buffer[100];

	n = ft_recursive_factorial(5);
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
