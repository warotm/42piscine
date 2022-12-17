/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:58:27 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/05 12:59:37 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
