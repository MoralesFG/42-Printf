/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:15:41 by framoral          #+#    #+#             */
/*   Updated: 2023/01/13 13:56:00 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/**
 * @brief Lo que hace esta función es imprimir un número sin signo. Declaramos
 * una variable de tipo entero. Si el número es mayor que 9 dividiremos entre 10
 * y luego sacaremos el resto (misma función que putnbr). Por otro lado, 
 * queremos que los números que sean menores que 10, lo imprima directamente.  
 * 
 * @param i 
 * 
 * @return La i resultante 
 **/
int	ft_unsigned(unsigned int long number)
{
	int	i;

	i = 0;
	if (number > 9)
	{
		i += ft_unsigned(number / 10);
		i += ft_putcharf("0123456789"[number % 10]);
	}
	else
		i += ft_putcharf("0123456789"[number % 10]);
	return (i);
}
/* Función tipo %u */