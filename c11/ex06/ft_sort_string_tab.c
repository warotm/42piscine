/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:49:21 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/12 14:10:44 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *a, char *b)
{
	while (*a == *b && *a && *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		n;
	char	*tmp;

	n = 0;
	while (tab[n])
		n++;
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
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
#include<unistd.h>

int	main(void)
{
	char	*test[] = {"123", "121", "111", NULL};
	int		i;
	int		j;

	ft_sort_string_tab(test);
	i = 0;
	while (test[i])
	{
		j = 0;
		while (test[i][j] != '\0')
			write(1, &test[i][j++], 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
*/
