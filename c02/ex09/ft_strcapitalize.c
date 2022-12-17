/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmakaran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:11:38 by wmakaran          #+#    #+#             */
/*   Updated: 2022/11/28 08:49:22 by wmakaran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	check_alpha_nb(char c)
{
	if ((c >= 'A' & c <= 'Z')
		| (c >= 'a' & c <= 'z')
		| (c >= '0' & c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0) | (!check_alpha_nb(str[i - 1])))
			if (str[i] >= 'a' & str[i] <= 'z')
				str[i] = str[i] - 'a' + 'A';
		if ((i != 0) & (check_alpha_nb(str[i - 1])))
			if (str[i] >= 'A' & str[i] <= 'Z')
				str[i] = str[i] - 'A' + 'a';
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	str2[] = "ReKt17+LOl MdR Mdr 4242l42";

	write(1, ft_strcapitalize(str1), 62);
	write(1, "\n", 1);
	write(1, ft_strcapitalize(str2), 28);
	return (0);
}
*/
