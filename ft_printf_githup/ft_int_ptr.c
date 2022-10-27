/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaari <aaljaari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:27:43 by aaljaari          #+#    #+#             */
/*   Updated: 2022/03/22 12:18:35 by aaljaari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_length_long(unsigned long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

int	ft_long_hex(unsigned long n)
{
	int	hex_len;

	hex_len = ft_hex_length_long(n);
	if (n >= 16)
	{
		ft_long_hex(n / 16);
		ft_long_hex(n % 16);
	}
	else if (n <= 9)
		ft_int_putchar(n + '0');
	else if (n > 9 && n < 16)
	{
		ft_int_putchar(n - 10 + 'a');
	}
	return (hex_len);
}

int	ft_int_ptr(unsigned long n)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	len += ft_long_hex(n);
	return (len);
}
