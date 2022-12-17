/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:06:57 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/24 08:49:06 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	x;
	int		i;

	i = 0;
	while (i < 26)
	{
		x = i + 'a';
		write(1, &x, 1);
		i++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
