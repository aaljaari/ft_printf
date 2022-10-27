/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaari <aaljaari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:28:34 by aaljaari          #+#    #+#             */
/*   Updated: 2022/03/22 12:22:58 by aaljaari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <string.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_int_putchar(char c);
int	ft_int_str(const char *s);
int	ft_int_putnbr(int nb);
int	ft_printf(const char *format, ...);
int	ft_int_hex(unsigned int n, char check);
int	ft_hex_length(unsigned int n);
int	ft_int_unsigned(unsigned int nb);
int	ft_int_ptr(unsigned long n);

#endif
