/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:56:04 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/23 17:57:17 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include <unistd.h>

int		check_except(char a, char b);
void	write_result(char *dict, char *nbr_arr, int arr_size);
int		write_str_file(char *src, char *numb);
char	*ft_union(char a, char b);

#endif