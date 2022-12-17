/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:27:22 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/12 13:40:12 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);

void	ft_add(int a, int b);
void	ft_minus(int a, int b);
void	ft_div(int a, int b);
void	ft_mul(int a, int b);
void	ft_mod(int a, int b);

void	ft_do_op(char *a, char *b, void (*f)(int, int))
{
	f(ft_atoi(a), ft_atoi(b));
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (ft_strcmp(argv[2], "+") == 0)
		ft_do_op(argv[1], argv[3], &ft_add);
	else if (ft_strcmp(argv[2], "-") == 0)
		ft_do_op(argv[1], argv[3], &ft_minus);
	else if (ft_strcmp(argv[2], "/") == 0)
		ft_do_op(argv[1], argv[3], &ft_div);
	else if (ft_strcmp(argv[2], "*") == 0)
		ft_do_op(argv[1], argv[3], &ft_mul);
	else if (ft_strcmp(argv[2], "%") == 0)
		ft_do_op(argv[1], argv[3], &ft_mod);
	else
		ft_putstr("0");
	ft_putstr("\n");
	return (0);
}
