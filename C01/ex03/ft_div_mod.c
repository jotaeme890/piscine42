/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:31:48 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/12 11:30:50 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main (void)
{
	int a = 10;

	int b = 5;

	int div;

	int mod;

	ft_div_mod(a, b, &div, &mod);

	printf("%d", div);
	printf("%d", mod);
}
*/
