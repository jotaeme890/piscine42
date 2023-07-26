/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:50:29 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/12 16:40:30 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = aux;
		i++;
	}
}
/*
int main(void)
{
	int c[5] = {1,2,3,4,5};
	ft_rev_int_tab(c, 5);
	printf("%d", c[0]);
	printf("%d", c[1]);
	printf("%d", c[2]);
	printf("%d", c[3]);
	printf("%d", c[4]);
}
*/
