/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:34:51 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/25 10:06:27 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int		div;
	int		mod;
	char	x[3];

	ft_div_mod(9, 2, &div, &mod);
	x[0] = div + '0';
	x[1] = ',';
	x[2] = mod + '0';
	write(1, x, 3);
}
*/
