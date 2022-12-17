/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:17:24 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/26 20:12:54 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' & str[i] <= 'z') | (str[i] >= 'A' & str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	if (ft_str_is_alpha("abcdefg") == 1)
		write(1, "OK\n", 3);
	if (ft_str_is_alpha("ABCDEFG") == 1)
		write(1, "OK\n", 3);
	if (ft_str_is_alpha("0123456") == 0)
		write(1, "OK\n", 3);
}
*/
