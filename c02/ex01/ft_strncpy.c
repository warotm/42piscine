/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:03:28 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/27 12:50:01 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' & i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	test_dest[20];
	char	*test_dest_ptr;

	test_dest_ptr = ft_strncpy(test_dest, "0123456789", 5);
	write(1, test_dest, 20);
	write(1, "\n", 1);
	write(1, test_dest_ptr, 20);
	return (0);
}
*/
