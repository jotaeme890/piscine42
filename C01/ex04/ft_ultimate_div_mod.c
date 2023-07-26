/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:35:08 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/12 12:28:56 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *a / *b;
	*b = aux % *b;
}

/*
int main (void)
{
	int a = 10;
	int b = 5;

	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("%d", b);
}
*/
