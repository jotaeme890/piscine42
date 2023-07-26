/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 10:51:13 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/24 19:35:26 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;
	int				j;

	j = 0;
	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[size] = '\0';
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (len);
}
