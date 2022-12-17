/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:51:09 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/26 20:15:01 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' & str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[13] = "abcd0123ABCD";

	write(1, ft_strupcase(str), 13);
	return (0);
}
*/
