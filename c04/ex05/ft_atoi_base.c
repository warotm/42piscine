/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 09:37:45 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/30 17:11:09 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_n_base(char *base)
{
	int	n;
	int	i;

	n = 0;
	while (base[n] != '\0')
	{
		if (base[n] == '+' || base[n] == '-')
			return (0);
		if (n > 0)
		{
			i = n - 1;
			while (i >= 0)
			{
				if (base[n] == base[i])
					return (0);
				i--;
			}
		}
		n++;
	}
	if (n < 2)
		return (0);
	return (n);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		n;
	char	buffer[100];
	int		i;

	n = ft_n_base(base);
	if (!n)
		return ;
	if (nbr == 0)
		write(1, &base[0], 1);
	if (nbr < 0)
	{
		nbr = nbr * -1;
		write(1, "-", 1);
	}
	i = 0;
	while (nbr > 0)
	{
		buffer[i++] = base[(nbr % n)];
		nbr = nbr / n;
	}
	while (i > 0)
		write(1, &buffer[--i], 1);
}

int	ft_pos_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	multiplier;
	int	n;

	n = ft_n_base(base);
	if (!n)
		return (0);
	result = 0;
	multiplier = 1;
	i = 0;
	while ((str[i] == '\t' | str[i] == '\n' | str[i] == '\v' | str[i] == '\f'
			| str[i] == '\r' | str[i] == ' ') & (str[i] != '\0'))
		i++;
	while ((str[i] == '-' | str[i] == '+') & (str[i] != '\0'))
		if (str[i++] == '-')
			multiplier *= -1;
	while ((ft_pos_base(str[i], base) >= 0) & (str[i] != '\0'))
		result = (result * n) + (ft_pos_base(str[i++], base));
	return (result * multiplier);
}

/*
int	main(void)
{
	ft_putnbr_base(ft_atoi_base("1A", "0123456789ABCDEF"), "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(ft_atoi_base("-1A", "0123456789ABCDEF"), "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(ft_atoi_base("1A", "0123456789ABCDE0"), "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(ft_atoi_base(" --++-1A", "0123456789ABCDEF"), "0123456789");
	write(1, "\n", 1);
	return (0);
}
*/
