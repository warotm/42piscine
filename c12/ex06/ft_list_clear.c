/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:27:15 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/17 11:23:42 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*ptr;
	t_list	*tmp;

	ptr = begin_list;
	while (ptr)
	{
		tmp = ptr->next;
		free_fct(ptr->data);
		free(ptr);
		ptr = tmp;
	}
}

/*
#include <unistd.h>

void	ft_free(void *data)
{
	write(1, data, 1);
	write(1, "\n", 1);
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*elem;
	t_list	*prev_elem;
	t_list	*first_elem;
	int		i;

	if (size > 0)
		first_elem = ft_create_elem(strs[0]);
	else
		return (0);
	i = 1;
	prev_elem = first_elem;
	while (i < size)
	{
		elem = ft_create_elem(strs[i]);
		prev_elem->next = elem;
		prev_elem = elem;
		i++;
	}
	return (first_elem);
}

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
	char	*strs[] = {"I", "have", "no", "life"};
	int		size = 4;

	elem = ft_list_push_strs(size, strs);
	begin_list = &elem;
	print_list(begin_list);
	ft_list_clear(*begin_list, &ft_free);
	print_list(begin_list);
	return (0);
}
*/
