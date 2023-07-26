/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:44:22 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/09 18:13:38 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_draw(int x, char left, char mid, char right)
{
	int	j;

	j = 0;
	while (j < x)
	{
		if (j == 0)
			ft_putchar(left);
		else
		{
			if (j == x - 1)
				ft_putchar(right);
			else
				ft_putchar(mid);
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			ft_draw (x, 'A', 'B', 'C');
		else
		{
			if (i == y - 1)
				ft_draw (x, 'C', 'B', 'A');
			else
				ft_draw (x, 'B', ' ', 'B');
		}
		i++;
	}
}
