/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:55:58 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/23 17:55:59 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "utils.h"

int	ft_open(char *dict_path)
{
	int	fd;

	fd = open(dict_path, 0);
	if (fd == -1)
		return (0);
	return (fd);
}

char	*ft_create_dict(char *dict_path)
{
	char	buff[1];
	int		dict_size;
	char	*dict;
	int		fd;

	dict_size = 0;
	fd = ft_open(dict_path);
	if (fd == 0)
		return ("Dict Error \n");
	else
	{
		while (read(fd, buff, 1) != 0)
			dict_size++;
		dict_size++;
		dict = (char *)malloc(dict_size);
		close(fd);
		ft_open(dict_path);
		dict_size = 0;
		while (read(fd, buff, 1) != 0)
			dict[dict_size++] = buff[0];
		dict[dict_size++] = '\0';
	}
	return (dict);
}

int	ft_number_size(char *nbr)
{
	int	i;

	i = 0;
	if (nbr[i] == '-')
		return (0);
	while (nbr[i] != 0)
	{
		if (nbr[i] == ',' || nbr[i] == '.')
			return (0);
		i++;
	}
	i = 1;
	while (nbr[i] != 0 && nbr[i] >= '0' && nbr[i] <= '9')
		i++;
	return (i);
}

int	ft_arr_size(int nbr_size)
{
	int	i;

	i = 0;
	if (nbr_size % 3 == 0)
		return (nbr_size);
	else
	{
		while (nbr_size % 3 != 0)
			nbr_size++;
	}
	return (nbr_size);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}