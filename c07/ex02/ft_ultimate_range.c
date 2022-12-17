/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 09:57:10 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/02 11:20:40 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	i;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	ptr = malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (max - min);
}

/*
#include<unistd.h>
int	main(void)
{
	int	*tmp = NULL;
	int	**range = &tmp;
	int	*ptr = NULL;
	int	i;
	int	n;

	n = ft_ultimate_range(range, 'A', 'Z');
	i = 0;
	ptr = *range;
	while (i < n)
	{
		write(1, &ptr[i], 1);
		write(1, " ", 1);
		i++;
	}
	return (0);
}
*/
