/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:11:31 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/26 20:44:18 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] == '\0' | s2[i] == '\0')
			break ;
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	x;

	x = ft_strncmp("abcd", "abcdefg", 4) + '0';
	write(1, &x, 1);
	x = ft_strncmp("abcd", "abCD", 2) + '0';
	write(1, &x, 1);
	x = ft_strncmp("aBCd", "abCD", 5) + '0';
	write(1, &x, 1);
	x = ft_strncmp("abcd", "ab", 4) + '0';
	write(1, &x, 1);
}
*/
