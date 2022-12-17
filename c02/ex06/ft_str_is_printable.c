/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:45:10 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/26 20:14:34 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' & str[i] <= '~')
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	if (ft_str_is_printable("abcdefg") == 1)
		write(1, "OK\n", 3);
	if (ft_str_is_printable("ABCDEFG") == 1)
		write(1, "OK\n", 3);
	if (ft_str_is_printable("0123456") == 1)
		write(1, "OK\n", 3);
}
*/
