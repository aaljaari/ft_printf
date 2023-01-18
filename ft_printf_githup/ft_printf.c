/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaari <aaljaari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:50:05 by aaljaari          #+#    #+#             */
/*   Updated: 2022/03/25 10:17:38 by aaljaari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flag(va_list arg, char h)
{
	int	len;

	len = 0;
	if (h == 'c')
		len += ft_int_putchar(va_arg(arg, int));
	else if (h == 's')
		len += ft_int_str(va_arg(arg, char *));
	else if (h == '%')
		len += ft_int_putchar('%');
	else if (h == 'd' || h == 'i')
		len += ft_int_putnbr(va_arg(arg, int));
	else if (h == 'x' || h == 'X')
		len += ft_int_hex(va_arg(arg, unsigned int), h);
	else if (h == 'p')
		len += ft_int_ptr(va_arg(arg, unsigned long));
	else if (h == 'u')
		len += ft_int_unsigned(va_arg(arg, unsigned int));
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	int		i;
	va_list	arg;

	i = 0;
	len = 0;
	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			len += ft_flag(arg, format[i + 1]);
			i++;
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(arg);
	return (len);
}

int	main(void)
{
	char	*p;
	int	f = 45;
	/*------------This is the built int printf------------*/
	printf("\n\033[0;36m------------Built in printf------------\033[0m\n\n");
	printf("This is the string output: %s\n", "Hello my name is Ahlam Salem");
	printf("This is the decimal output: %d\n", '2');
	printf("This is the integer output: %i\n", '2');
	printf("This is the unsigned decimal output: %u\n", '2');
	printf("This is the lower case hexa output: %x\n", f);
	printf("This is the upper case hexa output: %X\n", f);
	printf("This is the pointer output: %p\n", &p);
	printf("This is the character output: %c\n", 'f');
	printf("This is the percentage output: %%\n\n");

	/*------------This is my ft_printf------------*/
	ft_printf("\n\033[0;32m------------My ft_printf------------\033[0m\n\n");
	ft_printf("This is the string output: %s\n", "Hello my name is Ahlam Salem");
	ft_printf("This is the decimal output: %d\n", '2');
	ft_printf("This is the integer output: %i\n", '2');
	ft_printf("This is the unsigned decimal output: %u\n", '2');
	ft_printf("This is the lower case hexa output: %x\n", f);
	ft_printf("This is the upper case hexa output: %X\n", f);
	ft_printf("This is the pointer output: %p\n", &p);
	ft_printf("This is the character output: %c\n", 'f');
	ft_printf("This is the percentage output: %%\n\n");
}

