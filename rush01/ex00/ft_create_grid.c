/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_grid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:41:53 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/04 17:42:47 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	create_grid_put_param(char my_grid[6][6], char *param)
{
	my_grid[1][0] = param[0];
	my_grid[2][0] = param[2];
	my_grid[3][0] = param[4];
	my_grid[4][0] = param[6];
	my_grid[1][5] = param[8];
	my_grid[2][5] = param[10];
	my_grid[3][5] = param[12];
	my_grid[4][5] = param[14];
	my_grid[0][1] = param[16];
	my_grid[0][2] = param[18];
	my_grid[0][3] = param[20];
	my_grid[0][4] = param[22];
	my_grid[5][1] = param[24];
	my_grid[5][2] = param[26];
	my_grid[5][3] = param[28];
	my_grid[5][4] = param[30];
}

void	create_grid(char my_grid[6][6], char *param)
{
	int		w;
	int		h;

	h = 0;
	while (h < 6)
	{
		w = 0;
		while (w < 6)
			my_grid[w++][h] = ' ';
		h++;
	}
	create_grid_put_param(my_grid, param);
}
