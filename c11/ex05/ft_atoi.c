/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:51:19 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/13 13:35:23 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb)
{
	char	buffer[100];
	int		is_neg;
	int		i;
	long	nbr;

	nbr = nb;
	if (nbr == 0)
		write(1, "0", 1);
	if (nbr < 0)
	{
		is_neg = 1;
		nbr = nbr * -1;
	}
	else
		is_neg = 0;
	i = 0;
	while (nbr > 0)
	{
		buffer[i++] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (is_neg == 1)
		write(1, "-", 1);
	while (i > 0)
		write(1, &buffer[--i], 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	multiplier;

	result = 0;
	multiplier = 1;
	i = 0;
	while ((str[i] == '\t' | str[i] == '\n' | str[i] == '\v'
			| str[i] == '\f' | str[i] == '\r' | str[i] == ' ')
		& (str[i] != '\0'))
		i++;
	while ((str[i] == '-' | str[i] == '+') & (str[i] != '\0'))
	{
		if (str[i] == '-')
			multiplier *= -1;
		i++;
	}
	while ((str[i] >= '0' & str[i] <= '9') & (str[i] != '\0'))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * multiplier);
}

/*
int	main(void)
{
	ft_putnbr(ft_atoi("   ---+--+1234ab567"));
	return (0);
}
*/
