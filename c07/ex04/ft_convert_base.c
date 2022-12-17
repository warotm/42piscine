/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:33:15 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/05 18:37:24 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_n_base(char *base);
int	ft_pos_base(char c, char *base);

char	*ft_getnbr_base_zero_neg(long *nbr, char *ptr, char *base)
{
	if (*nbr == 0)
		*(ptr++) = base[0];
	if (*nbr < 0)
	{
		*nbr = *nbr * -1;
		*(ptr++) = '-';
	}
	return (ptr);
}

char	*ft_getnbr_base(long nbr, char *base)
{
	int		n;
	char	buffer[100];
	int		i;
	char	*output;
	char	*ptr;

	n = ft_n_base(base);
	output = malloc(100);
	ptr = output;
	if (!n)
		return (NULL);
	ptr = ft_getnbr_base_zero_neg(&nbr, ptr, base);
	i = 0;
	while (nbr > 0)
	{
		buffer[i++] = base[(nbr % n)];
		nbr = nbr / n;
	}
	while (i > 0)
		*(ptr++) = buffer[--i];
	*ptr = '\0';
	return (output);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	long	result;
	int		multiplier;
	int		n;

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	nb;

	if (!ft_n_base(base_from) || !ft_n_base(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	return (ft_getnbr_base(nb, base_to));
}

/*
#include<unistd.h>

void	ft_putstr(char *str)
{
	if (str == NULL)
	{
		ft_putstr("NULL");
		return ;
	}
	while (*str)
		write(1, str++, 1);
}

int	main(void)
{
	ft_putstr(ft_convert_base("1A", "0123456789ABCDEF", "0123456789"));
	ft_putstr("\n");
	ft_putstr(ft_convert_base("0", "0123456789ABCDEF", "0123456789"));
	ft_putstr("\n");
	ft_putstr(ft_convert_base("-1A", "0123456789ABCDEF", "0123456789"));
	ft_putstr("\n");
	ft_putstr(ft_convert_base("-1A", "0123456789ABCDE0", "0123456789"));
	ft_putstr("\n");
	ft_putstr(ft_convert_base("-1A", "0123456789ABCDEF", "0123456780"));
	ft_putstr("\n");
	return (0);
}
*/
