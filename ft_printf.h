/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dal-mahr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 12:24:32 by dal-mahr          #+#    #+#             */
/*   Updated: 2024/10/13 12:24:36 by dal-mahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	print_format(const char c, va_list args);
int	ft_putnbr(int n);
int	ft_putchar(char c);
int	ft_putstr(const char *str);
int	ft_putnbrunsigned(unsigned int n);
int	ft_putmemoryaddress(void *p);
int	ft_print_hex(unsigned long number, char c);

#endif
