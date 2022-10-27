/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaari <aaljaari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:48:06 by aaljaari          #+#    #+#             */
/*   Updated: 2022/03/25 10:42:02 by aaljaari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_length(unsigned int n)
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

int	ft_int_hex(unsigned int n, char check)
{
	int	hex_len;

	hex_len = ft_hex_length(n);
	if (n >= 16)
	{
		ft_int_hex(n / 16, check);
		ft_int_hex(n % 16, check);
	}
	else if (n <= 9)
		ft_int_putchar(n + '0');
	else if (n > 9 && n < 16)
	{
		if (check == 'x')
			ft_int_putchar(n - 10 + 'a');
		if (check == 'X')
			ft_int_putchar(n - 10 + 'A');
	}
	return (hex_len);
}

// int	main()
// {
// 	printf("\n%x\n", ft_int_hex(60, 'x'));
// 	return (0);
// }
