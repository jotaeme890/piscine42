/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:26:11 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/25 17:32:42 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*range;

	if (min >= max)
	{
		range = 0;
		return (range);
	}
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
/*
int	main(void)
{
	int	*range;
	int	i;

	i = 0;
	range = ft_range(3, 7);
	while (range[i])
	{
		printf("%d", range[i]);
		i++;
	}
}
*/
