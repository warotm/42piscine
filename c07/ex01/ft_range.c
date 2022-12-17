/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 09:38:19 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/03 19:45:46 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	if (min >= max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < (max - min))
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}

/*
#include<unistd.h>
int	main(void)
{
	int		*ptr;
	int		i;

	ptr = ft_range('A', 'Z');
	i = 0;
	while (i < 26)
	{
		write(1, &ptr[i], 1);
		write(1, " ", 1);
		i++;
	}
	return (0);
}
*/
