/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:28:07 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/26 04:39:27 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*range;

	if (min >= max)
		return (NULL);
	size = max - min;
	i = 0;
	range = (int *)malloc(sizeof(int) * size + 1);
	while (i < size)
	{
		range[i] = min;
		min++;
		i++;
	}
	range[i] = '\0';
	return (range);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	*range = ft_range(min, max);
	if (*range == 0)
		return (-1);
	return (i);
}
/*
int	main(void)
{
	int	*range[7 - 3];
	int	i;
	int	size;

	size = 7 - 3;
	i = 0;
	i = ft_ultimate_range(range, 3, 7);
	printf("%d", i);
}
*/
