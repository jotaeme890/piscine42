/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_reader.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:55:53 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/23 17:55:54 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_printable(char c)
{
	int	bool;

	bool = 0;
	if (c >= 32 && c <= 126)
	{
		bool = 1;
	}
	return (bool);
}

int	ft_char_is_numeric(char str)
{
	int	check;

	check = 1;
	if (str < '0' || str > '9')
	{
		check = 0;
	}
	return (check);
}

int	write_str(char *src, int i)
{
	while (src[i] != 10)
	{
		if (ft_is_printable(src[i]) == 1)
		{
			write(1, &src[i], 1);
		}
		else
			return (0);
		i++;
	}
	return (1);
}

int	find_string(char *str, int i)
{
	int	value;

	i = 0;
	while (str[i] != ':')
	{
		if (str[i] == 10)
			return (0);
		i++;
	}
	i++;
	while (str[i] == ' ')
		i++;
	if (ft_is_printable(str[i]) == 1)
		value = i;
	else
		value = 0;
	return (value);
}

int	check_num(char *src, char *numb, int p)
{
	int	bool;
	int	i;

	i = 0;
	bool = 0;
	while (ft_char_is_numeric(src[p]) == 1 && numb[i] != '\0')
	{
		if (numb[i] == src[p])
			bool = 1;
		else
			bool = 0;
		p++;
		i++;
	}
	return (bool);
}