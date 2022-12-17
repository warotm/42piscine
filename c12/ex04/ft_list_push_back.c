/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:31:42 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/14 10:46:44 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem;

	if (!*begin_list)
	{
		elem = ft_create_elem(data);
		*begin_list = elem;
		return ;
	}
	elem = *begin_list;
	while (elem->next)
		elem = elem->next;
	elem->next = ft_create_elem(data);
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

	elem = ft_create_elem("Hi");
	elem = NULL;
	begin_list = &elem;
	ft_list_push_back(begin_list, "Hello");
	print_list(begin_list);
	ft_list_push_back(begin_list, "World");
	print_list(begin_list);
	return (0);
}
*/
