/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:51:25 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/18 12:14:21 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	pow;

	i = 0;
	pow = 1;
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	if ((power == 0 && nb == 0) || power == 0)
		return (1);
	while (i < power)
	{
		pow *= nb;
		i++;
	}
	return (pow);
}
/*
int main(void)
{
	printf("%d", ft_iterative_power(5, 2));
}
*/
