/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_reader.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:55:56 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/23 17:55:57 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DICT_READER_H
# define DICT_READER_H

# include <unistd.h>

int	ft_is_printable(char c);
int	ft_char_is_numeric(char str);
int	write_str(char *src, int i);
int	find_string(char *str, int i);
int	check_num(char *src, char *numb, int p);

#endif