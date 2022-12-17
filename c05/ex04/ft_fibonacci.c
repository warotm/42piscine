/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:40:49 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/06 15:25:17 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
int	main(void)
{
	int		n;
	int		i;
	char	buffer[100];

	n = ft_fibonacci(5);
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
