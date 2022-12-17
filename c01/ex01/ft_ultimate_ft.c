/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:43:21 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/25 10:04:55 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*
int	main(void)
{
	int		number;
	int		*p;
	int		**pp;
	int		***ppp;
	int		****pppp;
	int		*****ppppp;
	int		******pppppp;
	int		*******ppppppp;
	int		********pppppppp;
	int		*********ppppppppp;
	char	x[2];

	p = &number;
	pp = &p;
	ppp = &pp;
	pppp = &ppp;
	ppppp = &pppp;
	pppppp = &ppppp;
	ppppppp = &pppppp;
	pppppppp = &ppppppp;
	ppppppppp = &pppppppp;
	ft_ultimate_ft(ppppppppp);
	x[0] = number / 10 + '0';
	x[1] = number % 10 + '0';
	write(1, &x, 2);
	return (0);
}
*/
