/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 09:16:18 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/18 10:14:58 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

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

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*ptr;

	ptr = begin_list;
	i = 0;
	while (ptr)
	{
		if (i == nbr)
			return (ptr);
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*rev_list;
	t_list	*ptr;
	int		n;
	int		i;

	n = ft_list_size(*begin_list);
	if (!n)
		return ;
	i = 0;
	ptr = ft_list_at(*begin_list, n - 1);
	rev_list = ptr;
	while (i < n)
	{
		ptr = ft_list_at(*begin_list, n - i - 1);
		if (n - i - 2 < 0)
			ptr->next = NULL;
		else
			ptr->next = ft_list_at(*begin_list, n - i - 2);
		i++;
	}
	*begin_list = rev_list;
}

/*
#include <unistd.h>

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
	ft_list_reverse(begin_list);
	print_list(begin_list);
	return (0);
}
*/
