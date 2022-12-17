/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:55:56 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/12 15:00:19 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char*))
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
			if (cmp(tab[j], tab[j + 1]) > 0)
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
int	ft_strcmp(char *a, char *b)
{
	while (*a == *b && *a && *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}

#include<unistd.h>

int	main(void)
{
	char	*test[] = {"123", "121", "111", NULL};
	int		i;
	int		j;

	ft_advanced_sort_string_tab(test, &ft_strcmp);
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
