/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:21:37 by framoral          #+#    #+#             */
/*   Updated: 2023/01/12 13:05:12 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrf(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		ft_putstrf ("-2147483648");
		return (11);
	}
	else if (n < 0)
	{
		i += ft_putcharf ('-');
		i += ft_putnbrf (-n);
	}
	else if (n >= 10)
	{
		i += ft_putnbrf (n / 10);
		i += ft_putnbrf (n % 10);
	}
	else
	{
		i += ft_putcharf (n + 48);
	}
	return (i);
}
/* Función tipo %d y %i */