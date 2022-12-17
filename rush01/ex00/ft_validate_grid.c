/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_grid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:27:02 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/04 14:44:32 by ivanderw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>

int	ft_validate_grid(char grid[6][6])
{
	int	*is_use_row;
	int	*is_use_col;
	int	i;
	int	j;

	i = 0;
	while (++i < 5)
	{
		j = 0;
		is_use_row = malloc(sizeof(int) * 4);
		is_use_col = malloc(sizeof(int) * 4);
		while (++j < 5)
		{
			if (is_use_row[grid[i][j] - '1'] == 0)
				is_use_row[grid[i][j] - '1'] = 1;
			else
				return (0);
			if (is_use_col[grid[j][i] - '1'] == 0)
				is_use_col[grid[j][i] - '1'] = 1;
			else
				return (0);
		}
	}
	return (1);
}

/*
#include<stdlib.h>
#include<unistd.h>
int	main(void)
{
	char	x;
	char	grid[6][6] = {
		" 4321 ",
		"412341",
		"323412",
		"234122",
		"141222",
		" 1222 "
	};

	x = ft_validate_grid(grid) + '0';
	write(1, &x, 1);
}
*/
