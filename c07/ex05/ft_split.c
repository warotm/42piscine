/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:18:21 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/05 19:00:47 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_is_in_charset(char c, char *charset)
{
	char	*ptr_charset;

	ptr_charset = charset;
	while (*ptr_charset)
	{
		if (c == *ptr_charset)
			return (1);
		ptr_charset++;
	}
	return (0);
}

int	ft_get_word_count(char *str, char *charset)
{
	char	*ptr_str;
	int		word_count;

	word_count = 0;
	ptr_str = str;
	while (*ptr_str)
	{
		while (ft_is_in_charset(*ptr_str, charset) && *ptr_str)
			ptr_str++;
		if (!ft_is_in_charset(*ptr_str, charset) && *ptr_str)
		{
			while (!ft_is_in_charset(*ptr_str, charset) && *ptr_str)
				ptr_str++;
			word_count++;
		}
	}
	return (word_count);
}

int	ft_get_max_word_length(char *str, char *charset)
{
	char	*ptr_str;
	int		word_length;
	int		max_word_length;

	word_length = 0;
	max_word_length = 0;
	ptr_str = str;
	if (!*ptr_str)
		return (0);
	while (*ptr_str)
	{
		if (!ft_is_in_charset(*ptr_str, charset))
			word_length++;
		else
		{
			if (word_length > max_word_length)
				max_word_length = word_length;
			word_length = 0;
		}
		ptr_str++;
	}
	if (word_length > max_word_length)
		max_word_length = word_length;
	return (max_word_length);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	char	**ptr_strs;
	char	*word;
	char	*ptr_word;
	int		word_attr[2];

	word_attr[0] = ft_get_word_count(str, charset);
	word_attr[1] = ft_get_max_word_length(str, charset);
	strs = malloc(sizeof(char *) * word_attr[0] + 1);
	ptr_strs = strs;
	while (--word_attr[0] >= 0)
	{
		word = malloc(sizeof(char) * word_attr[1] + 1);
		ptr_word = word;
		while (ft_is_in_charset(*str, charset) && *str)
			str++;
		while (!ft_is_in_charset(*str, charset) && *str)
			*(ptr_word++) = *(str++);
		*(ptr_strs++) = word;
	}
	*ptr_strs = NULL;
	return (strs);
}

/*
#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(void)
{
	char	**strs;

	strs = ft_split(" Hello  my - World!!-", " -");
	//strs = ft_split("                                         ", "     ");
	//strs = ft_split("C00kxv qlylzfJU6snFQiBGhrD8eG1 baYVTWvEgr3o", "");
	//strs = ft_split("3hKQoAKVDFSfjXbn0gsjakZmzXRaR  BxaHLHvNLNPHP", "buUe8z9t");
	//strs = ft_split(" gh ", " gh");
	while (*strs)
	{
		ft_putstr(*strs);
		ft_putstr("\n");
		strs++;
	}
	return (0);
}
*/
