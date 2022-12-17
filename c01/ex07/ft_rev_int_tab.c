/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 09:05:32 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/25 10:09:41 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}

/*
int	main(void)
{
	int	test[] = {'0', '1', '2', '3', '4'};
	int	size = 5;
	int	i = 0;

	ft_rev_int_tab(test, size);
	while (i < size)
	{
		write(1, &test[i], 1);
		i++;
	}
	return (0);
}
*/
