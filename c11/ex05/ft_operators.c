/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operators.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:38:39 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/12 13:40:52 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str);
void	ft_putnbr(int nb);

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
}

void	ft_minus(int a, int b)
{
	ft_putnbr(a - b);
}

void	ft_div(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(a / b);
}

void	ft_mul(int a, int b)
{
	ft_putnbr(a * b);
}

void	ft_mod(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(a % b);
}
