/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:30:08 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/26 20:13:11 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' & str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	if (ft_str_is_numeric("abcdefg") == 0)
		write(1, "OK\n", 3);
	if (ft_str_is_numeric("ABCDEFG") == 0)
		write(1, "OK\n", 3);
	if (ft_str_is_numeric("0123456") == 1)
		write(1, "OK\n", 3);
}
*/
