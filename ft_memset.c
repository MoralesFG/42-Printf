/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:49:37 by framoral          #+#    #+#             */
/*   Updated: 2023/01/12 10:39:12 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	size_t			aux;

	a = (unsigned char *)b;
	aux = 0;
	while (len > 0 && aux < len)
	{
		a[aux] = (unsigned char)c;
			aux++;
	}
	return (a);
}
/* Copia el valor de c (convertido en unsigned char) en cada uno de los 
primeros n caracteres en el puntero apuntado por s. 
La función retorna el valor de s.*/