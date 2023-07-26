/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:55:45 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/23 17:57:10 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict_reader.h"
#include "print.h"

int	check_except(char a, char b)
{
	if (a == '1' && b != '0')
	{
		return (1);
	}
	return (0);
}

void	write_m(char *dict, int m)
{
	if (m == 1)
	{
		write_str_file(dict, "1000");
	}
	else if (m == 2)
	{
		write_str_file(dict, "1000000");
	}
	else if (m == 3)
	{
		write_str_file(dict, "1000000000");
	}
}

void	write_result(char *dict, char *nbr_arr, int arr_size)
{
	int	i;
	int	c;

	i = 0;
	while (nbr_arr[i] != '\0')
	{
		c = 0;
		while (c < 3)
		{
			if (nbr_arr[i + c] != '0')
			{
				if (c == 1)
				{
					if (check_except(nbr_arr[i + c], nbr_arr[i + c + 1]) == 1)
						write_str_file(dict, ft_union(nbr_arr[i + c], nbr_arr[i
								+ c + 1]));
					else
						write_str_file(dict, ft_union(nbr_arr[i + c], '0'));
				}
			}
			c++;
			if (c == 0)
				write_str_file(dict, "100");
		}
		write_m(dict, arr_size - i);
		i += 3;
	}
}

int	write_str_file(char *src, char *numb)
{
	int	i;
	int	bool;

	i = 0;
	bool = 0;
	if (src[0] == '\0')
		return (0);
	while (src[i] != '\0')
	{
		if (src[i] != ' ')
		{
			if (check_num(src, numb, i) == 1)
			{
				if (find_string(src, i) == 0)
					return (0);
				else
					bool = write_str(src, i);
			}
			return (bool);
		}
		i++;
	}
	return (0);
}

char	*ft_union(char a, char b)
{
	char	*chars[2];
	int		i;

	i = 0;
	while (i < 2)
	{
		if (i == 0)
			chars[i] = &a;
		else
			chars[i] = &b;
		i++;
	}
	return (*chars);
}