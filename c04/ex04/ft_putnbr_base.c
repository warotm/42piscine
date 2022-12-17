/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 09:00:20 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/01 08:48:01 by wmakaran         ###   ########.fr       */
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
	long	lnbr;

	lnbr = nbr;
	n = ft_n_base(base);
	if (!n)
		return ;
	if (lnbr == 0)
		write(1, &base[0], 1);
	if (lnbr < 0)
	{
		lnbr = lnbr * -1;
		write(1, "-", 1);
	}
	i = 0;
	while (lnbr > 0)
	{
		buffer[i++] = base[(lnbr % n)];
		lnbr = lnbr / n;
	}
	while (i > 0)
		write(1, &buffer[--i], 1);
}

/*
int	main(void)
{
	ft_putnbr_base(26, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(-26, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(0, "pony");
	write(1, "\n", 1);
	return (0);
}
*/
