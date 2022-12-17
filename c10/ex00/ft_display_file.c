/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:13:57 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/13 09:42:17 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_display_file(char *filename)
{
	int		fd;
	int		ret;
	char	c;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return ;
	}
	while (1)
	{
		ret = read(fd, &c, 1);
		if (ret > 0)
		{
			write(1, &c, 1);
		}
		else
		{
			break ;
		}
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		ft_display_file(argv[1]);
	}
	return (0);
}
