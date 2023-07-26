/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamedina <jamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:42:47 by jamedina          #+#    #+#             */
/*   Updated: 2023/07/16 13:49:37 by jamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

const int	g_dic4[1] = {1234};
const int	g_dic3[6] = {1243, 1324, 1342, 2134, 2314, 2341};
const int	g_dic2[11] = {1423, 1432, 2143, 2413, 2431, 3124,
	3142, 3214, 3241, 3412, 3421};
const int	g_dic1[6] = {4123, 4132, 4213, 4231, 4312, 4321};

void	generate(char *str_argumentos, int **matrix)
{
	int		string_count;
	int		count;
	int		it;
	int		z_f_it;

	string_count = 0;
	count = -1;
	it = 1;
	z_f_it = 0;
	while (++count < 16)
	{
		if ((count / 4) % 2 == 0)
			z_f_it = 0;
		else
			z_f_it = 5;
		if (count < 8)
			matrix [z_f_it][it] = str_argumentos[string_count] - '0';
		else
			matrix [it][z_f_it] = str_argumentos[string_count] - '0';
		if (it == 4)
			it = 1;
		else
			it++;
		string_count += 2;
	}
}

int	in_row(int **matrix, int column, int row, int num_compare)
{
	int	count;

	count = 0;
	while (++count < column)
	{
		if (matrix[row][count] == num_compare)
			return (1);
	}
	return (0);
}

int	assign_num(int **matrix, int column, int cnt_dictionary)
{
	int	count;
	int	div;
	int	num_2_assign;

	count = 0;
	div = 1000;
	if (matrix[0][column] == 1)
		num_2_assign = g_dic1[cnt_dictionary];
	else if (matrix[0][column] == 2)
		num_2_assign = g_dic2[cnt_dictionary];
	else if (matrix[0][column] == 3)
		num_2_assign = g_dic3[cnt_dictionary];
	else
		num_2_assign = g_dic4[cnt_dictionary];
	while (++count <= 4)
	{
		matrix[count][column] = (num_2_assign) / (div);
		num_2_assign %= div;
		div /= 10;
		if (in_row(matrix, column, count, matrix[count][column]))
			count = 5;
	}
	return (count == 6);
}

int	d_length(int limite)
{
	if (limite == 1)
		return (6);
	else if (limite == 2)
		return (11);
	else if (limite == 3)
		return (6);
	else if (limite == 4)
		return (1);
	else
		return (0);
}
