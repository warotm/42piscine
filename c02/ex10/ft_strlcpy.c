/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 08:45:35 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/28 09:02:21 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 & src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

/*
int	main(void)
{
	char	src[] = "123456789";
	char	dest[20];
	char	n;

	n = ft_strlcpy(dest, src, 5) + '0';
	write(1, dest, 20);
	write(1, "\n", 1);
	write(1, &n, 1);
	return (0);
}
*/
