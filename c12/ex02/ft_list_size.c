/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:20:25 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/14 10:21:08 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*elem;
	int		i;

	elem = begin_list;
	i = 0;
	while (elem)
	{
		i++;
		elem = elem->next;
	}
	return (i);
}

/*
#include <unistd.h>
#include <stdlib.h>

void	print_list(t_list **begin_list)
{
	t_list	*elem;
	char	*data;

	elem = *begin_list;
	write(1, "[START]\n", 8);
	while (elem)
	{
		data = (char *) elem->data;
		while (*data)
			write(1, data++, 1);
		write(1, "\n", 1);
		elem = elem->next;
	}
	write(1, "[END]\n", 6);
}

int	main(void)
{
	t_list	**begin_list;
	t_list	*elem;
	char	n;

	elem = ft_create_elem("Hello");
	begin_list = &elem;
	elem->next = ft_create_elem("World");
	print_list(begin_list);
	n = ft_list_size(*begin_list) + '0';
	write(1, &n, 1);
	return (0);
}
*/
