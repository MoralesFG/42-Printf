/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:00:56 by framoral          #+#    #+#             */
/*   Updated: 2023/01/17 13:25:13 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/**
 * @brief Convierte caracteres en caracteres de base 16. Primero, contaremos la
 * cantidad de caracteres de nuestro hexadecimal (mediante ft_long) y lo
 * almacenamos. Segundo, realizamos una reserva de memoria para nuestra string
 * (usando calloc para dejarla limpia) y lo guardamos dentro de nuestro puntero.
 * Tercero, convertimos nuestro hexadecimal en char para escribirlo. Cuarto, 
 * si n == 0 igualaremos nuestro str = '0'. Quinto, queremos que
 * nuestra función select_hexa convierta nuestro hexadecimal en char para poder
 * escribirlo. Sexto, cuando i == 0 entramos en bucle para %p. Dentro de esto, 
 * si en nuestra string no hay contenido escribiremos '0x0', y si existe
 * contenido escribiremos '0x seguido de nuestra string'. Séptimo, si nuestra
 * string es %x o %X escribiremos nuestra str. Finalmente liberamos memoria
 * alocada, igualamos str a NULL y devolvemos el resultado de size.
 * 
 * @param size 
 * @param str  
 * 
 * @return size 
 **/
int	ft_char_to_hexa(unsigned long int n, int i)
{
	int			size;
	static char	*str;

	size = ft_long(n);
	str = ft_calloc(sizeof(char), (size + 1));
	if (n == 0)
		str[size - 1] = '0';
	ft_select_hexa(str, size - 1, n, i);
	if (i == 0)
	{
		if (!str[size - 1] && size - 1 == 0)
			ft_printf("%s" "0x0");
		else
			ft_printf("0x%s", str);
	}
	else
		ft_printf("%s", str);
	free(str);
	str = 0;
	return (size);
}
