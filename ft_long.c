/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:23:22 by framoral          #+#    #+#             */
/*   Updated: 2023/01/12 10:49:24 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_long(unsigned long n)
{
	int	i;

	i = 1;
	while (n >= 16)
	{
		i++;
		n = n / 16;
	}
	return (i);
}
/* Cuenta la cantidad de caracteres de un hexadecimal. Crearemos un contador
que empiza en 1, porque si este número existe ya contaremos con un dígito.
Mientras sea mayor que 15, iremos sumando y sacamos el cociente del hexadecimal,
por eso dividiremos entre 16. Por último devolvemos el valor de i, que será
la cantidad de caracteres. */