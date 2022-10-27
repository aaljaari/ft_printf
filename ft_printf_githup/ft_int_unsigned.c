/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaari <aaljaari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:09:01 by aaljaari          #+#    #+#             */
/*   Updated: 2022/03/25 11:08:09 by aaljaari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int_unsigned(unsigned int nb)
{
	unsigned int	len;

	len = 0;
	if (nb >= 10)
	{
		len = len + ft_int_unsigned(nb / 10);
		len = len + ft_int_unsigned(nb % 10);
	}
	else
		len = len + ft_int_putchar(nb + '0');
	return (len);
}

// int	main()
// {
// 	printf("\n%d\n", ft_int_unsigned(12));
// 	return (0);
// }
