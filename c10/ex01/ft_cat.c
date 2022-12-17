/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:04:35 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/14 13:34:21 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>
#include<libgen.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_display_file(char *filename)
{
	int		fd;
	int		ret;
	char	c;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	while (1)
	{
		ret = read(fd, &c, 1);
		if (ret != 0)
		{
			write(1, &c, 1);
		}
		else
			break ;
	}
	close(fd);
	return (1);
}

int	ft_read_stdin(void)
{
	char	c;

	while (read(0, &c, 1))
	{
		write(1, &c, 1);
	}
	return (0);
}

void	print_error(char *program_name, char *file_name)
{
	ft_putstr(basename(program_name));
	ft_putstr(": ");
	ft_putstr(file_name);
	ft_putstr(": No such file or directory\n");
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		ft_read_stdin();
	else
	{
		i = 1;
		while (i < argc)
		{
			if (argv[i][0] != '-')
			{
				if (!ft_display_file(argv[i]))
					print_error(argv[0], argv[i]);
			}
			else
				ft_read_stdin();
			i++;
		}
	}
	return (0);
}
