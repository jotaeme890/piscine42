/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:17:13 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/18 09:56:35 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	fact = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb >= i)
	{
		fact = nb * fact;
		nb--;
	}
	return (fact);
}
/*
int	main(void)
{
	int	i;

	i = 5;
	printf("%d", ft_iterative_factorial(i));
}
*/
