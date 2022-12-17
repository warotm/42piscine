/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:25:40 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/24 08:50:37 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	x;

	i = 0;
	while (i < 10)
	{
		x = i + '0';
		write(1, &x, 1);
		i++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
