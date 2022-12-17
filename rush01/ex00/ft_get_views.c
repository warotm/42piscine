/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_views.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:26:12 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/03 15:11:07 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

char	ft_get_view(char *boxes)
{
	int			i;
	char		view;
	char		highest_box;

	i = 0;
	view = '0';
	highest_box = '0';
	while (boxes[i])
	{
		if (boxes[i] > highest_box)
		{
			highest_box = boxes[i];
			view++;
		}
		i++;
	}
	return (view);
}

char	*ft_reverse(char *str)
{
	char	*rstr;
	int		i;
	int		j;

	rstr = malloc(sizeof(str));
	i = 0;
	while (str[i])
		i++;
	j = 0;
	while (j < i)
	{
		rstr[j] = str[i - j - 1];
		j++;
	}
	return (rstr);
}

char	*ft_get_views(char *boxes)
{
	char	*views;

	views = malloc(3);
	views[0] = ft_get_view(boxes);
	views[1] = ft_get_view(ft_reverse(boxes));
	return (views);
}

/*
int	main(void)
{
	write(1, ft_get_views("1243"), 2);
}
*/
