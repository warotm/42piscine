/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:33:47 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/26 20:13:28 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' & str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	if (ft_str_is_lowercase("abcdefg") == 1)
		write(1, "OK\n", 3);
	if (ft_str_is_lowercase("ABCDEFG") == 0)
		write(1, "OK\n", 3);
	if (ft_str_is_lowercase("0123456") == 0)
		write(1, "OK\n", 3);
}
*/
