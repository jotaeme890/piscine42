/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:32:13 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/13 16:50:23 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*a = "HOLA";
	char	*b = "";

	printf("%d", ft_str_is_uppercase(a));
	printf("%d", ft_str_is_uppercase(b));
}
*/
