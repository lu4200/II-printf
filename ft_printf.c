/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:14:06 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/18 18:51:12 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(char type, va_list ap)
{
	int count;

	count = 0;
	if (type == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (type == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (type == 'd')
		count += ft_put_nbr_base((long)va_arg(ap, int), 10, type, 0);
	else if (type == 'x' || type == 'X')
		count += ft_put_nbr_base((long)va_arg(ap, unsigned int), 16, type, 0);
	else if (type == 'u')
		count += ft_putunsigned(va_arg(ap, unsigned int));
	else
		count += write (1, &type, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += check_format(*(++format), ap);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}

