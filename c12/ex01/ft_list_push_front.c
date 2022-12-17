/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:50:40 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/14 10:13:59 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*elem;

	elem = ft_create_elem(data);
	elem->next = *begin_list;
	*begin_list = elem;
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

	elem = ft_create_elem("Hello");
	begin_list = &elem;
	print_list(begin_list);
	ft_list_push_front(begin_list, "Let's say");
	print_list(begin_list);
	return (0);
}
*/
