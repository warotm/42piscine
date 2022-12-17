/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:23:10 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/24 08:56:44 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

long	ft_pow10(int n)
{
	int		i;
	long	result;

	i = 0;
	result = 1;
	while (i < n)
	{
		result = result * 10;
		i++;
	}
	return (result);
}

int	ft_print_number_long_n(long nb, int n)
{
	int		i;
	char	comb[10];
	int		valid;

	i = 0;
	while (i < n)
	{
		comb[n - i - 1] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	i = 0;
	valid = 1;
	while (i < (n - 1))
	{
		if (comb[i] >= comb[i + 1])
			valid = 0;
		i++;
	}
	if (valid)
	{
		write(1, &comb, n);
		return (1);
	}
	return (0);
}

int	ft_is_last(long nb, int n)
{
	int		i;
	long	c;

	i = 0;
	c = 9;
	while (i < n)
	{
		if (nb % 10 == c)
		{
			nb = nb / 10;
			c = c - 1;
		}
		else
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_combn(int n)
{
	long	i;
	long	j;

	i = 0;
	j = ft_pow10(n);
	while (i < j)
	{
		if (ft_print_number_long_n(i, n))
		{
			if (ft_is_last(i, n))
				break ;
			write(1, ", ", 2);
		}
		i++;
	}
}

/*
int	main(void)
{
	ft_print_combn(9);
	return (0);
}
*/
