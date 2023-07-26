/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamedina <jamedina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:41:22 by jamedina          #+#    #+#             */
/*   Updated: 2023/07/16 13:53:03 by jamedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		check_arg(char *str);
void	rush(char *str_argumentos);

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "Error: argumento no introducido", 31);
		exit(1);
	}
	else
	{
		if (!check_arg(argv[1]))
		{
			write(1, "Error: argumentos inválidos", 27);
			exit(1);
		}
		rush(argv[1]);
	}
}
