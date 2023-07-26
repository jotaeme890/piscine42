/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamedina <jamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:40:56 by jamedina          #+#    #+#             */
/*   Updated: 2023/07/16 13:52:45 by jamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define FILAS 6
#define COLUMNAS 6

void	generate(char *str_argumentos, int **matrix);
int		in_row(int **matrix, int column, int row, int num_compare);
int		assign_num(int **matrix, int column, int cnt_dictionary);
int		d_length(int limite);
int		check_arg(char *str);
int		check_column(int **matrix, int column);
int		check_left(int **matrix, int row);
int		check_right(int **matrix, int row);
int		check_rows(int **matrix);

void	cout_result(int **matrix)
{
	int	number;
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i <= 4)
	{
		while (j <= 4)
		{
			number = matrix[i][j] + '0';
			write(1, &(number), 1);
			write(1, " ", 1);
			j++;
		}
		i++;
		j = 1;
		write(1, "\n", 1);
	}
}

void	recursive(int **matrix, int column, int *result)
{
	int	cnt_dictionary;
	int	assign_failure;

	cnt_dictionary = -1;
	while (++cnt_dictionary < d_length(matrix[0][column]) && !(*result))
	{
		assign_failure = assign_num(matrix, column, cnt_dictionary);
		if ((!assign_failure) && check_column(matrix, column))
		{
			if (column != 4)
				recursive(matrix, column + 1, result);
			else
				*result = check_rows(matrix);
		}
	}
	if (*result && (column == 4))
		cout_result(matrix);
	else if (!(*result) && (column == 1))
		printf("Error, no hay solución posible");
}

void	map(int **matrix)
{
	int	result;

	result = 0;
	recursive(matrix, 1, &result);
}

void	rush(char *str_argumentos)
{
	int		**matrix;
	int		count;

	count = -1;
	matrix = (int **)malloc(sizeof(int *) * FILAS);
	while (++count < 6)
		matrix[count] = (int *)malloc(sizeof(int) * COLUMNAS);
	generate(str_argumentos, matrix);
	map(matrix);
	free(matrix);
}
