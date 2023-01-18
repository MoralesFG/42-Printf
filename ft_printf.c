/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:01:19 by framoral          #+#    #+#             */
/*   Updated: 2023/01/17 13:45:49 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/**
 * @brief Imprime un mensaje por pantalla utilizando una cadena de formato que
 * incluye diversos tipos de instrucciones para mezclar múltiples cadenas en la
 * cadena final a mostrar por pantalla. Primero vemos que inicia con "va_start"
 * y termina con "va_end" que significa respectivamente "acceso a los argumentos
 * de la función variádica" y "fin de acceso a los argumentos". Segundo, mientras
 * exista contenido en nuestro puntero entraremos al bucle, aquí iremos avanzando
 * y en función del % que encuentre en la funcion ft_percent verá que hacer. 
 * En caso de que no haya % simplemente escribiremos lo que haya dentro 
 * indicado por nuestro puntero. 
 * 
 * @param i 
 * @param counter 
 * @param args La utilizaremos para almacenar lods argumentos que existen
 * 
 * @return Devuelve la cantidad total de caracteres escritos 
 **/
int	ft_printf(char const *str, ...)
{
	int		i;
	int		counter;
	va_list	args;

	i = 0;
	counter = 0;
	va_start(args, str);
	if (write(1, "", 0) == -1)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			counter = ft_percent(str[i], args, counter);
		}
		else
		{
			counter++;
			write (1, &str[i], 1);
		}
		i++;
	}
	va_end(args);
	return (counter);
}
