/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaari <aaljaari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:03:51 by aaljaari          #+#    #+#             */
/*   Updated: 2022/03/25 11:15:32 by aaljaari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int_putnbr(int nb)
{
	int	len;

	len = 0;
	if (nb == -2147483648)
	{
		len += write(1, "-2147483648", 11);
		return (len);
	}
	if (nb < 0)
	{
		len += ft_int_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		len += ft_int_putnbr(nb / 10);
		len += ft_int_putnbr(nb % 10);
	}
	else
		len += ft_int_putchar(nb + '0');
	return (len);
}

// int	main(void)
// {
// 	printf("\n%d\n", ft_int_putnbr(12));
// 	return (0);
// }
