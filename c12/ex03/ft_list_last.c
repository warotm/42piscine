/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:23:25 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/14 10:48:51 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*elem;

	elem = begin_list;
	if (!elem)
		return (elem);
	while (elem->next)
	{
		elem = elem->next;
	}
	return (elem);
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
	elem->next = ft_create_elem("World");
	print_list(begin_list);
	elem = ft_list_last(*begin_list);
	print_list(&elem);
	return (0);
}
*/
