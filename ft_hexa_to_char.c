/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_to_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:12:24 by framoral          #+#    #+#             */
/*   Updated: 2023/01/17 11:55:14 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/**
 * @brief Función auxiliar para la conversión de caracteres de base 16 en char,
 * la usaremos dentro de la función ft_select_hexa.
 * Para %p y %x necesitamos letras minúsculas y para %X mayúsculas.
 * Si nuestra n es menor que 10, simplemente queremos que nos devuelva ese
 * número en la tabla ascii. Si n es mayor que 9 comprobamos ambos casos
 * (i == 0 para %p || i == 1 para %x); A continuación restaremos 10 a n y
 * luego sumaremos la posición de 'a' en la tabla ascii para poder evitar
 * los números que no queremos tener en cuenta aquí. La posición real de 'a' es
 * 97, pero restándole 10 estaremos en 87. 
 * En el siguiente caso, al poner else, no es necesario poner i == 2, que
 * la usaremos para %X. Bajo el mismo proceso queremos que nos devuelva n - 10
 * sumando la posición en ascii de 'A'.
 * 
 * @return cero
 **/
char	ft_hexa_to_char(unsigned long n, int i)
{
	if (n < 10)
		return (n + 48);
	while (n > 9)
	{
		if (i == 0 || i == 1)
			return (n - 10 + 'a');
		else
			return (n - 10 + 'A');
	}
	return (0);
}
