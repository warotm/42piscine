/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:12:40 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/13 14:45:34 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	flag[2];

	flag[0] = 1;
	flag[1] = 1;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			flag[0] = 0;
		i++;
	}
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i + 1], tab[i]) > 0)
			flag[1] = 0;
		i++;
	}
	if (flag[0] || flag[1])
		return (1);
	else
		return (0);
}

/*
#include <unistd.h>

int	ft_intcmp(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	char	c;
	int		test[] = {1, 2, 2, 3, 4};
	//int		test[] = {4, 3, 2, 2, 1};
	//int		test[] = {3, 2, 1, 2, 3};

	c = ft_is_sort(test, 5, &ft_intcmp) + '0';
	write(1, &c, 1);
	return (0);
}
*/
