# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 16:20:08 by wmakaran          #+#    #+#              #
#    Updated: 2022/12/07 16:21:01 by wmakaran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc -c -Wall -Wextra -Werror ft_putchar.c
cc -c -Wall -Wextra -Werror ft_swap.c
cc -c -Wall -Wextra -Werror ft_putstr.c
cc -c -Wall -Wextra -Werror ft_strlen.c
cc -c -Wall -Wextra -Werror ft_strcmp.c
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
