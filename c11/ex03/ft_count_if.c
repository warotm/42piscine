/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 09:32:59 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/09 10:49:32 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (i < length)
	{
		if (f(tab[i]))
			counter++;
		i++;
	}
	return (counter);
}

/*
int	is_first_char_a(char *str)
{
	if (str[0] == 'a')
		return (1);
	else
		return (0);
}

#include <unistd.h>

int	main(void)
{
	char	n;
	char	*strs[] = {"ant", "bird", "airplane"};

	n = ft_count_if(strs, 3, &is_first_char_a) + '0';
	write(1, &n, 1);
	return (0);
}
*/
