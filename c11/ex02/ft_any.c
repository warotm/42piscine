/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:53:51 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/09 09:29:02 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	char	**ptr;

	ptr = tab;
	while (*ptr)
	{
		if (f(*ptr))
			return (1);
		ptr++;
	}
	return (0);
}

/*
int	is_first_char_a(char *str)
{
	if (str[0] == 'a')
		return (1);
	else
		return (0);
}

#include <unistd.h>

int	main(void)
{
	char	*strs[] = {"Hello", "My", "Pointer", NULL};

	if (ft_any(strs, &is_first_char_a))
		write(1, "Return 1", 8);
	else
		write(1, "Return 0", 8);
	return (0);
}
*/
