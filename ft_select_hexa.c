/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:30:33 by framoral          #+#    #+#             */
/*   Updated: 2023/01/17 13:27:45 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/**
 * @brief Lo que hace esta función es convertir caracteres de base 16 en char.
 * Estableceremos una variable de la función a "unsigned long int" para poder
 * almacenar hasta 32 bits (4 bytes). 
 * Mientras nuestra n sea distinta de nulo, haremos que x haga el módulo de n
 * con base 16. Seguidamente, queremos que nuestro str reste posiciones y la 
 * igualaremos a la función auxiliar para la conversión de caracteres de base 
 * 16 en char. Finalmente queremos que nuestra n se divida en base 16.
 * 
 * @param static para que cuando la llamemos desde otra función empiece a contar
 * con el valor que quedó resultante en esta, y no empiece desde cero.
 * 
 * @return el str resultante 
 **/
char	ft_select_hexa(char *str, int size, unsigned long n, int i)
{
	unsigned long int	x;

	x = 0;
	while (n != '\0')
	{
		x = (n % 16);
		str[size--] = ft_hexa_to_char(x, i);
		n = (n / 16);
	}
	return (*str);
}
