/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaari <aaljaari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:33:12 by aaljaari          #+#    #+#             */
/*   Updated: 2022/03/25 11:08:01 by aaljaari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int_str(const char *s)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!s)
	{
		len += write(1, "(null)", 6);
		return (len);
	}
	while (s[i] != '\0')
	{
		len += ft_int_putchar(s[i]);
		i++;
	}
	return (len);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "Ahlam Salem";
// 	string(str);
// }
