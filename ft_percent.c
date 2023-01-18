/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:39:33 by framoral          #+#    #+#             */
/*   Updated: 2023/01/17 13:14:16 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/**
 * @brief Se encarga de establecer lo que deben realizar los diferentes casos
 * según su respectiva función. Para cada % hará lo que se indique en su caso. 
 * 
 * @return counter
 **/
int	ft_percent(char c, va_list args, int counter)
{
	if (c == 'c')
		counter = counter + ft_putcharf(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		counter = counter + ft_putnbrf(va_arg(args, int));
	else if (c == 's')
		counter = counter + ft_putstrf(va_arg(args, char *));
	else if (c == 'u')
		counter = counter + ft_unsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		counter = counter + ft_char_to_hexa(va_arg(args, unsigned int), 1);
	else if (c == 'X')
		counter = counter + ft_char_to_hexa(va_arg(args, unsigned int), 2);
	else if (c == 'p')
	{
		counter = (counter + 2);
		counter = counter + ft_char_to_hexa(va_arg(args, unsigned long int), 0);
	}
	else if (c == '%')
		counter += ft_putcharf('%');
	return (counter);
}
