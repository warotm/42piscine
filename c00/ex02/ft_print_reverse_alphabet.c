/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:21:37 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/24 08:49:48 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	x;
	int		i;

	i = 0;
	while (i < 26)
	{
		x = 'z' - i;
		write(1, &x, 1);
		i++;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
