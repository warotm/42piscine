/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:49:11 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/29 16:07:16 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 0)
		result *= nb--;
	return (result);
}

/*
int	main(void)
{
	int		n;
	int		i;
	char	buffer[100];

	n = ft_iterative_factorial(5);
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
