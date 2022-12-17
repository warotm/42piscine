/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 09:36:14 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/26 20:31:17 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	write(1, "I have no idea at all.", 22);
	return (addr);
}

/*
int	main(void)
{
	char	str[] = "Don't give up.\nYou can finish this piscine.\nKeep fighting.";

	ft_print_memory(str, 20);
	return (0);
}
*/
