/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:36:44 by framoral          #+#    #+#             */
/*   Updated: 2023/01/12 11:30:46 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstrf(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		return (ft_putstrf("(null)"));
	}
	while (str[i] != '\0')
	{
		ft_putcharf (str[i]);
		i++;
	}
	return (i);
}
/* Función tipo %s */