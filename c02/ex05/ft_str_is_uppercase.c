/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:36:32 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/26 20:14:00 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' & str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	if (ft_str_is_uppercase("abcdefg") == 0)
		write(1, "OK\n", 3);
	if (ft_str_is_uppercase("ABCDEFG") == 1)
		write(1, "OK\n", 3);
	if (ft_str_is_uppercase("0123456") == 0)
		write(1, "OK\n", 3);
}
*/
