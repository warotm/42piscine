/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:52:39 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/14 09:48:09 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	elem->data = data;
	elem->next = NULL;
	return (elem);
}

/*
#include <unistd.h>

int	main(void)
{
	char	x;
	t_list	*elem;

	x = '9';
	elem = ft_create_elem(&x);
	write(1, elem->data, 1);
	return (0);
}
*/
