/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:01:37 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/04 19:02:54 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*get_iterator(char *iterstr)
{
	int	*iter;
	int	i;

	iter = malloc(sizeof(int) * 2);
	i = 0;
	while (i < 2)
	{
		if (iterstr[i] == '-')
			iter[i] = -1;
		if (iterstr[i] == '+')
			iter[i] = 1;
		if (iterstr[i] == '0')
			iter[i] = 0;
		i++;
	}
	return (iter);
}

char	*get_input_from_iterator(char *iterstr)
{
	char	*inputs;
	int		i;

	inputs = malloc(sizeof(char) * 4);
	i = 0;
	while (i < 4)
	{
		inputs[i] = iterstr[i + 2];
		i++;
	}
	return (inputs);
}

char	*concat(char *input, char *iterstr)
{
	char	*output;
	int		i;

	output = malloc(sizeof(char) * 6);
	i = 0;
	while (i < 2)
	{
		output[i] = iterstr[i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		output[i + 2] = input[i];
		i++;
	}
	return (output);
}
