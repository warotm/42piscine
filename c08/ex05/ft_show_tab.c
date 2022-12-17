/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 09:14:23 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/10 10:17:42 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putstr_nl(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr <= 0)
		write(1, "0", 1);
	else
	{
		c = nbr % 10 + '0';
		if (nbr / 10 > 0)
			ft_putnbr(nbr / 10);
		write(1, &c, 1);
	}
}

void	ft_putnbr_nl(int nbr)
{
	ft_putnbr(nbr);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par && par->str)
	{
		ft_putstr_nl(par->str);
		ft_putnbr_nl(par->size);
		ft_putstr_nl(par->copy);
		par++;
	}
}

int	main(void)
{
	int					ac = 3;
	char				*av[] = {"123", "1234", "12345"};
	struct s_stock_str	*stocks;

	stocks = ft_strs_to_tab(ac, av);
	ft_show_tab(stocks);
	return (0);
}
