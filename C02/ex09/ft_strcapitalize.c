/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:36:30 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/14 10:40:45 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 90 && str[i] >= 65))
			str[i] += 32;
		i++;
	}
	i = 0;
	if ((str[i] != '\0') && (str[i] <= 122 && str[i] >= 97))
		str[i] -= 32;
	i++;
	while (str[i] != '\0')
	{	
		if (!(str[i - 1] <= 'z' && str[i - 1] >= 'a'))
			if (!(str[i - 1] <= 'Z' && str[i - 1] >= 'A'))
				if (!(str[i - 1] <= '9' && str[i - 1] >= '0'))
					if ((str[i] <= 'z' && str[i] >= 'a'))
						str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char *a = "Salut, Comment Tu Vas ? 42mots Quarante-Deux;";
	printf("%s", ft_strcapitalize(a));
}
*/
