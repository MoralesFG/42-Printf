/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:05:31 by framoral          #+#    #+#             */
/*   Updated: 2023/01/12 10:42:56 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*aux;

	aux = malloc(size * count);
	if (!aux)
		return (0);
	else
	{
		ft_bzero(aux, (size * count));
		return (aux);
	}
}
/* Esta función devuelve un puntero al espacio asignado. Con ella nos aseguramos
que el espacio de almacenamiento apuntado esté vacío (lleno de 0 con bzero). 
Reservaremos memoria con malloc y luego la llenaremos de 0 para que ese espacio
esté listo.
 */