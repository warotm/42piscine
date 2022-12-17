# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 16:19:41 by wmakaran          #+#    #+#              #
#    Updated: 2022/12/11 11:49:59 by wmakaran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	cc -c -Iincludes -Wall -Wextra -Werror srcs/ft_putchar.c -o srcs/ft_putchar.o
	cc -c -Iincludes -Wall -Wextra -Werror srcs/ft_swap.c -o srcs/ft_swap.o
	cc -c -Iincludes -Wall -Wextra -Werror srcs/ft_putstr.c -o srcs/ft_putstr.o
	cc -c -Iincludes -Wall -Wextra -Werror srcs/ft_strlen.c -o srcs/ft_strlen.o
	cc -c -Iincludes -Wall -Wextra -Werror srcs/ft_strcmp.c -o srcs/ft_strcmp.o
	ar rc libft.a srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o

clean:
	rm -f srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o

fclean: clean
	rm -f libft.a

re: fclean all

libft.a: all
