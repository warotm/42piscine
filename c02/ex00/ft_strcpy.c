/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:48:59 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/26 20:12:22 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	test_dest[11];
	char	*test_dest_ptr;

	test_dest_ptr = ft_strcpy(test_dest, "0123456789");
	write(1, test_dest, 11);
	write(1, "\n", 1);
	write(1, test_dest_ptr, 11);
	return (0);
}
*/
