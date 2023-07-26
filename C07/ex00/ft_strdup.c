/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 08:53:09 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/25 17:33:44 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

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

char	*ft_strdup(char *src)
{	
	char	*dst;

	dst = (char *)malloc(sizeof(char) * ft_strlen(src));
	if (dst == NULL)
		return (0);
	ft_strcpy(dst, src);
	return (dst);
}
/*
int	main(void)
{
	char src[] = "Hola que tal";
	char *dst;
	dst = ft_strdup(src);
	printf("%s", src);
	printf("%s", dst);
	free(dst);
}
*/
