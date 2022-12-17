/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:21:03 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/06 09:26:01 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	is_in_str(char c, char *str)
{
	while (*str)
		if (c == *(str++))
			return (1);
	return (0);
}

void	str_append(char *str, char c)
{
	while (*str)
		str++;
	*(str++) = c;
	*str = '\0';
}

int	is_valid(char *solution, int row, char position)
{
	int	i;

	if (is_in_str(position, solution))
		return (0);
	i = 0;
	while (solution[i])
	{
		if ((position == solution[i] + row - i)
			|| (position == solution[i] - row + i))
			return (0);
		i++;
	}
	return (1);
}

void	solve(char *solution, int *solution_count,
			char position, int queen_count)
{
	char	new_pos;
	char	*str;

	queen_count -= 1;
	str_append(solution, position);
	if (queen_count == 0)
	{
		write(1, solution, 10);
		write(1, "\n", 1);
		(*solution_count)++;
	}
	new_pos = '0';
	while (new_pos <= '9')
	{
		if (is_valid(solution, 10 - queen_count, new_pos))
			solve(solution, solution_count, new_pos, queen_count);
		new_pos++;
	}
	str = solution;
	while (*str)
		str++;
	*(--str) = '\0';
	queen_count += 1;
}

int	ft_ten_queens_puzzle(void)
{
	char	solution[11];
	int		solution_count;
	char	new_pos;

	solution[0] = '\0';
	solution_count = 0;
	new_pos = '0';
	while (new_pos <= '9')
		solve(solution, &solution_count, new_pos++, 10);
	return (solution_count);
}

/*
int	main(void)
{
	int	n;

	n = ft_ten_queens_puzzle();
	return (0);
}
*/
