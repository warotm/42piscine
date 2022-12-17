/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanderw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 09:59:52 by ivanderw          #+#    #+#             */
/*   Updated: 2022/12/04 20:41:15 by ivanderw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_validate_grid(char grid[6][6]);
void	print_inside_box(int bound, char grid[6][6]);
void	print_box(int bound, char grid[6][6]);
void	create_grid_put_param(char my_grid[6][6], char *param);
void	create_grid(char my_grid[6][6], char *param);
int		*get_iterator(char *iterstr);
char	*get_input_from_iterator(char *iterstr);
char	*concat(char *input, char *iterstr);
void	check_41_all(char grid[6][6]);
void	check_32(char grid[6][6], int x, int y, char *iterstr);
void	check_23(char grid[6][6], int x, int y, char *iterstr);
void	check_31(char grid[6][6], int x, int y, char *iterstr);
void	check_12(char grid[6][6], int x, int y, char *iterstr);
void	check_21(char grid[6][6], int x, int y, char *iterstr);
void	check_22(char grid[6][6], int x, int y, char *iterstr);
void	check_13(char grid[6][6], int x, int y, char *iterstr);
void	check_13_all(char grid[6][6]);
void	check_22_all(char grid[6][6]);
void	check_23_all(char grid[6][6]);
void	check_21_all(char grid[6][6]);
void	check_12_all(char grid[6][6]);
void	check_32_all(char grid[6][6]);
void	check_31_all(char grid[6][6]);

void	write_line( char grid[6][6], int x, int y, char *iterstr)
{
	int		*iter;
	char	*inputs;

	iter = get_iterator(iterstr);
	inputs = get_input_from_iterator(iterstr);
	grid[x + (iter[0])][y + (iter[1])] = inputs[0];
	grid[x + (2 * iter[0])][y + (2 * iter[1])] = inputs[1];
	grid[x + (3 * iter[0])][y + (3 * iter[1])] = inputs[2];
	grid[x + (4 * iter[0])][y + (4 * iter[1])] = inputs[3];
}

void	check_all(char my_grid[6][6])
{
	check_41_all(my_grid);
	check_32_all(my_grid);
	check_31_all(my_grid);
	check_21_all(my_grid);
	check_22_all(my_grid);
	check_12_all(my_grid);
	check_13_all(my_grid);
	check_23_all(my_grid);
}

int	main(int argc, char **argv)
{
	char	my_grid[6][6];
	char	temp_grid[6][6];
	int		i;

	if (argc == 2)
	{
		create_grid(my_grid, argv[1]);
		i = 0;
		while (i < 10 && ft_validate_grid(my_grid) == 0)
		{
			check_all(my_grid);
			i++;
		}
		if (ft_validate_grid(my_grid))
			print_inside_box(6, my_grid);
		else
			write(1, "Error\n", 6);
	}
	return (0);
}
