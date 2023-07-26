/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:24:51 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/13 16:09:54 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] <= 90 && str[i] >= 65) || (str[i] <= 122 && str[i] >= 97))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{
	char *a = "Hola";
	char *b = "";

	printf("%d",ft_str_is_alpha(a));
	printf("%d",ft_str_is_alpha(b));
}
*/
