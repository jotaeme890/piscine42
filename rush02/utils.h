/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UTILS.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmart2 <javmart2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:56:00 by javmart2          #+#    #+#             */
/*   Updated: 2023/07/23 17:56:01 by javmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

int		ft_open(char *dict_path);
char	*ft_create_dict(char *dict_path);
int		ft_number_size(char *nbr);
int		ft_arr_size(int nbr_size);
int		ft_strcmp(char *s1, char *s2);

#endif