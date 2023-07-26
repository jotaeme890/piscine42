/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamedina <jamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:44:54 by jamedina          #+#    #+#             */
/*   Updated: 2023/07/16 13:53:37 by jamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	check_arg(char *str)
{
	int	count;

	count = -1;
	while (str[++count] != '\0')
	{
		if (count % 2 == 0)
		{
			if (!(str[count] >= '1' && str[count] <= '4'))
				return (0);
		}
		else
			if (!(str[count] == ' '))
				return (0);
	}
	return (count == 31);
}

int	check_column(int **matrix, int column)
{
	int	count;
	int	vista;
	int	aux;

	count = 0;
	vista = 1;
	aux = matrix[4][column];
	while (++count < 4)
	{
		if (matrix[4 - count][column] > aux)
		{
			vista++;
			aux = matrix[4 - count][column];
		}
	}
	return (matrix[5][column] == vista);
}

int	check_left(int **matrix, int row)
{
	int	count;
	int	vista;
	int	aux;

	count = 0;
	vista = 1;
	aux = matrix[row][1];
	while (++count < 4)
	{
		if (matrix[row][count + 1] > aux)
		{
			vista++;
			aux = matrix[row][count + 1];
		}
	}
	return (matrix[row][0] == vista);
}

int	check_right(int **matrix, int row)
{
	int	count;
	int	vista;
	int	aux;

	count = 0;
	vista = 1;
	aux = matrix[row][4];
	while (++count < 4)
	{
		if (matrix[row][4 - count] > aux)
		{
			vista++;
			aux = matrix[row][4 - count];
		}
	}
	return (matrix[row][5] == vista);
}

int	check_rows(int **matrix)
{
	int	row;
	int	check;

	row = 0;
	check = 1;
	while (++row <= 4 && check)
	{
		check = (check_left(matrix, row) && check_right(matrix, row));
	}
	return (check);
}
