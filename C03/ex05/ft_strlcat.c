/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:37:41 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/17 13:11:32 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lens;
	unsigned int	lend;

	lend = ft_strlen(dest);
	lens = ft_strlen(src);
	i = 0;
	if (size < lend)
		return (size + lens);
	while (src[i] != '\0' && (lend + 1) < size)
	{
		dest[lend + i] = src[i];
		i++;
	}
	dest[lend + 1] = '\0';
	return (lens + lend);
}
/*
int main(void)
{
	char a[] = "Hola Mundo";
	char b[] = "Adios Mundo'";

	printf("%d",ft_strlcat(a,b,9));
}
*/
