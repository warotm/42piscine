/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:40:57 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/15 14:55:03 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<libgen.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(char *offset_str)
{
	int	offset;

	offset = 0;
	while (*offset_str)
	{
		offset = (offset * 10) + (*offset_str - '0');
		offset_str++;
	}
	return (offset);
}

void	print_error(char *program_name, char *file_name)
{
	ft_putstr(basename(program_name));
	ft_putstr(": ");
	ft_putstr(file_name);
	ft_putstr(": No such file or directory\n");
}

void	print_header(char *file_name)
{
	ft_putstr("==> ");
	ft_putstr(file_name);
	ft_putstr(" <==\n");
}
