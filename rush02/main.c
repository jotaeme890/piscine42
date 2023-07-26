/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:56:02 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/23 17:57:01 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include "utils.h"
#include "dict_reader.h"
#include "print.h"

char	*ft_arr_with_nbr(char *nbr, int arr_size, int nbr_size)
{
	int		i;
	int		zeros;
	char	*arr_with_nbr;
	int		j;

	i = 0;
	j = 0;
	zeros = arr_size - (nbr_size + 1);
	arr_with_nbr = (char *)malloc(arr_size);
	while (i < zeros)
	{
		arr_with_nbr[i] = '0';
		i++;
	}
	while (i < arr_size)
	{
		arr_with_nbr[i] = nbr[j];
		i++;
		j++;
	}
	return (arr_with_nbr);
}


void	ft_rush(char *dict_path, char *nbr)
{
	char	*dict;
	int		nbr_size;
	int		arr_size;

	dict = ft_create_dict(dict_path);
	nbr_size = ft_number_size(nbr);
	if (!(ft_strcmp(dict, "Dict Error \n")))
		write(1, "Dict Error", 10);
	else if (nbr_size == 0)
		write(1, "error", 5);
	else
	{
		arr_size = ft_arr_size(nbr_size) + 1;
		write_result(dict, ft_arr_with_nbr(nbr, arr_size, nbr_size),
			arr_size);
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_rush("numbers.dict", argv[1]);
	else if (argc == 3)
		ft_rush(argv[1], argv[2]);
	else
	{
		write(1, "error", 5);
		return (1);
	}
	return (0);
}