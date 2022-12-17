/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 09:48:22 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/25 10:10:34 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	int	test[] = {'4', '1', '2', '3', '0'};
	int	size = 5;
	int	i = 0;

	ft_sort_int_tab(test, size);
	while (i < size)
	{
		write(1, &test[i], 1);
		i++;
	}
	return (0);
}
*/
