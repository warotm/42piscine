/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 12:12:52 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/17 10:44:29 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *offset_str);
void	print_error(char *program_name, char *file_name);
void	print_header(char *file_name);

struct s_data
{
	char	*str;
	int		size;
	int		max_size;
};

void	ft_push_str(struct s_data *output, struct s_data *buffer)
{
	int		i;
	int		shift;

	shift = output->size - buffer->size;
	if (shift < 0)
		shift = 0;
	i = 0;
	while (i < shift)
	{
		output->str[i] = output->str[i + buffer->size];
		i++;
	}
	i = 0;
	while (i < buffer->size)
	{
		output->str[i + shift] = buffer->str[i];
		i++;
	}
	output->size = i + shift;
}

struct s_data	*ft_create_empty_data(int n)
{
	struct s_data	*data;

	data = malloc(sizeof(struct s_data));
	data->size = 0;
	data->max_size = n;
	data->str = malloc(sizeof(char) * n);
	while (--n >= 0)
		data->str[n] = '\0';
	return (data);
}

void	ft_tail(int fd, char *offset_str)
{
	int				offset;
	struct s_data	*output;
	struct s_data	*buffer;
	int				ret;

	offset = ft_atoi(offset_str);
	output = ft_create_empty_data(offset);
	buffer = ft_create_empty_data(offset);
	while (1)
	{
		ret = read(fd, buffer->str, offset);
		buffer->size = ret;
		if (ret)
			ft_push_str(output, buffer);
		else
			break ;
	}
	write(1, output->str, output->size);
}

void	ft_tail_file(char *offset_str, char *file_name, int header,
		char *program_name)
{
	int	fd;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		print_error(program_name, file_name);
		return ;
	}
	if (header)
	{
		if (header == 2)
			ft_putstr("\n");
		print_header(file_name);
	}
	ft_tail(fd, offset_str);
	close(fd);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 3)
	{
		ft_tail(0, argv[2]);
	}
	if (argc == 4)
	{
		ft_tail_file(argv[2], argv[3], 0, argv[0]);
	}
	if (argc > 4)
	{
		i = 3;
		while (i < argc)
		{
			if (i == 3)
				ft_tail_file(argv[2], argv[i], 1, argv[0]);
			else
				ft_tail_file(argv[2], argv[i], 2, argv[0]);
			i++;
		}
	}
	return (0);
}
