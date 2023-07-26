/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:38:35 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/25 18:48:08 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		i;
	int		j;
	int		k;
	int		tot;

	i = 0;
	j = 0;
	k = 0;
	tot = 1;
	while (j < size)
		tot += ft_strlen(strs[j++]) + ft_strlen(sep);
	arr = malloc(sizeof(char *) * tot);
	j = -1;
	while (++j < size)
	{
		while (strs[j][k])
			arr[i++] = strs[j][k++];
		k = 0;
		while (sep[k] && j < size - 1)
			arr[i++] = sep[k++];
		k = 0;
	}
	arr[i] = '\0';
	return (arr);
}
/*
int	main(void)
{
	char	**strs;

	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = "Hola";
	strs[1] = "Antonio Facundo";
	strs[2] = "Eustaquio";
	printf("%s", ft_strjoin(3, strs, ","));
}
*/
