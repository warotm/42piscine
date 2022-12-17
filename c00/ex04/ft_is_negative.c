/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:28:16 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/24 08:52:32 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	sign;

	if (n < 0)
		sign = 'N';
	else
		sign = 'P';
	write(1, &sign, 1);
}

/*
int	main(void)
{
	ft_is_negative(1);
	ft_is_negative(0);
	ft_is_negative(-1);
	return (0);
}
*/
