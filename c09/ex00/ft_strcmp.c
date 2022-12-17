/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:45:33 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/09 11:18:55 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
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

	x = ft_strcmp("abcd", "abcd") + '0';
	write(1, &x, 1);
	x = ft_strcmp("abcd", "abCD") + '0';
	write(1, &x, 1);
	x = ft_strcmp("aBCd", "abCD") + '0';
	write(1, &x, 1);
	x = ft_strcmp("abcd", "ab") + '0';
	write(1, &x, 1);
}
*/
