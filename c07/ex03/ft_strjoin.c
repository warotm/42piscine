/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:59:10 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/03 19:02:01 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_str_append(char *ptr, char *str)
{
	while (*str)
	{
		*ptr = *str;
		str++;
		ptr++;
	}
	*ptr = '\0';
	return (ptr);
}

int	ft_get_str_size(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*output;
	char	*ptr;
	int		counter;
	int		i;

	if (size == 0)
		return (malloc(1));
	counter = 0;
	i = 0;
	while (i < size)
		counter += ft_get_str_size(strs[i++]);
	output = malloc(counter + (ft_get_str_size(sep) * (size - 1)) + 1);
	ptr = output;
	i = 0;
	while (i < size)
	{
		ptr = ft_str_append(ptr, strs[i]);
		if (i < size - 1)
			ptr = ft_str_append(ptr, sep);
		i++;
	}
	return (output);
}

/*
#include<unistd.h>
int	main(void)
{
	char	*strs[] = {"I", "don't", "give", "up."};
	char	sep[] = "---";

	write(1, ft_strjoin(4, strs, sep), 100);
	free(ft_strjoin(0, strs, sep));
	return (0);
}
*/
