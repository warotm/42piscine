/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:06:02 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/26 20:15:27 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' & str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'a';
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[13] = "abcd0123ABCD";

	write(1, ft_strlowcase(str), 13);
	return (0);
}
*/
