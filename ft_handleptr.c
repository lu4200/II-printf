/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:55:11 by lumaret           #+#    #+#             */
/*   Updated: 2024/01/02 00:01:01 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handleptr(unsigned long d, char type)
{
	char	*hex;
	int		i;

	i = 0;
	if (type == 'P' || type == 'X')
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (d >= 16)
	{
		i += ft_handleptr(d / 16, type);
		i += ft_handleptr(d % 16, type);
	}
	else if (d <= 9)
		i += ft_putchar(d + '0');
	else
		i += ft_putchar(hex[d]);
	return (i);
}
