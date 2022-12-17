/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:54:55 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/01 13:07:34 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' & i < (nb - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	while (src[j] != '\0')
	{
		i++;
		j++;
	}
	return (i);
}

/*
int	main(void)
{
	char			test[5] = "1234";
	unsigned int	n;
	int				i;

	n = ft_strlcat(test, "5678", 7) + '0';
	i = 0;
	while (test[i] != '\0')
		write(1, &test[i++], 1);
	write(1, "\n", 1);
	write(1, &n, 1);
	return (0);
}
*/
