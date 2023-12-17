/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:14:06 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/17 18:28:19 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	check_format(char type, va_list ap)
{
	int count;

	count = 0;
	if (type == 'c')
		count = ft_putchar(va_arg(ap, int));
	else if (type == 's')
		count = ft_putstr(va_arg(ap, char *));
	else if (type == 'd')
		count += ft_put_nbr_base((long)va_arg(ap, int), 10, type);
	else if (type == 'x')
		count += ft_put_nbr_base((long)va_arg(ap, unsigned int), 16, type);
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
			print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
int	main()
{
	int	count;

	count = ft_printf("Hello %s\n", "Lucas");
	ft_printf("les caracteres lu sont au nombre de : %d\n", count);
	count = printf("Hello %s\n", "Lucas");
	printf("les caracteres lu sont au nombre de : %d\n", count);
}