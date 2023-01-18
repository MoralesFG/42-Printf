/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framoral <framoral@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:29:16 by framoral          #+#    #+#             */
/*   Updated: 2023/01/17 13:24:43 by framoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_putcharf(int c);
int		ft_putnbrf(int n);
int		ft_putstrf(char *str);
int		ft_percent(char c, va_list args, int counter);
void	*ft_memset(void *b, int c, size_t len);
int		ft_printf(char const *str, ...);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_unsigned(unsigned int long number);
char	ft_select_hexa(char *str, int size, unsigned long n, int i);
int		ft_char_to_hexa(unsigned long int n, int i);
char	ft_hexa_to_char(unsigned long n, int i);
int		ft_long(unsigned long n);

#endif
