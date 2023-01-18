/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:42:38 by framoral          #+#    #+#             */
/*   Updated: 2023/01/12 10:37:25 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*i;
	size_t			aux;

	i = (unsigned char *)s;
	aux = 0;
	while (aux < n)
	{
		i[aux] = 0;
		aux++;
	}
}
/* Necesitaremos esta función para usarla en calloc. Lo que hace es llenar
la cadena de ceros. */
