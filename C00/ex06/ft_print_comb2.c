/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 08:45:36 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/09 11:08:07 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = a + 1;
	while (a <= 98 && b <= 99)
	{
		ft_putchar(a / 10 + '0');
		ft_putchar(a % 10 + '0');
		write (1, " ", 1);
		ft_putchar(b / 10 + '0');
		ft_putchar(b % 10 + '0');
		if (!(a == 98 && b == 99))
			write (1, ", ", 2);
		b++;
		if (b > 99)
		{
			a++;
			b = a + 1;
		}
	}
}
