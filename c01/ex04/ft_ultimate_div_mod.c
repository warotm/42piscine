/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:48:14 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/25 10:07:17 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
int	main(void)
{
	int		a;
	int		b;
	char	x[3];

	a = 9;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	x[0] = a + '0';
	x[1] = ',';
	x[2] = b + '0';
	write(1, x, 3);
}
*/
