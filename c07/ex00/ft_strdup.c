/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 09:26:05 by wmakaran          #+#    #+#             */
/*   Updated: 2022/12/05 19:03:27 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*output;

	i = 0;
	while (src[i] != '\0')
		i++;
	output = malloc(i);
	i = 0;
	while (src[i] != '\0')
	{
		output[i] = src[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}

/*
#include<stdio.h>

int	main(void)
{
	char	*str;

	str = ft_strdup("");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("hello 42");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("Er9btqNn46RmNARb3svnqZZLe9taa5");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("905xnrqwgEC1sJXcyOl5CWl4C7BxByTbwq");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("SFa66ZBzFgmTTTYr");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("OMzkd7TajVdKMgJsq396kvnvhlniFFy5Dh1KT8TK0afYOKgF");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("BZxTJlNOP8SAqQKv06ElUhGU4Ztrdbb0YoqeahJkvChyB");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("mkHw5DkpM9etltrp4QD0MmoVAOMWxqbP586VKqV0ekaoDiHbN");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("NNzmV");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("oumPcmOnhZQ2MzmUYUHud9rVMUCE4Jm5");
	printf("%s\n", str);
	free(str);
}
*/
