/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 09:13:21 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/28 09:54:46 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_hex(char c)
{
	char	x[3];
	int		tmp;

	tmp = c;
	if (tmp < 0)
		tmp += 256;
	x[0] = '\\';
	if (tmp / 16 < 10)
		x[1] = (tmp / 16) + '0';
	else
		x[1] = (tmp / 16) - 10 + 'a';
	if (tmp % 16 < 10)
		x[2] = (tmp % 16) + '0';
	else
		x[2] = (tmp % 16) - 10 + 'a';
	write(1, x, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' & str[i] <= '~')
		{
			write(1, &str[i], 1);
		}
		else
		{
			ft_print_hex(str[i]);
		}
		i++;
	}
}

/*
int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";
	//char	str[] = {'\n', 10 , 182, '\0'};
	ft_putstr_non_printable(str);
	return (0);
}
*/
