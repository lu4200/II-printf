/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:55:11 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/20 16:41:11 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handleptr(unsigned long p, char type)
{
	int		i;
	char	*hex;
	char	*bighex;

	i = 0;
	hex = "0123456789abcdef";
	bighex = "0123456789ABCDEF";
	if (p < 16)
		i += write(1, &hex[p], 1);
	else if (p >= 16)
	{
		i += ft_handleptr(p / 16, type);
		i += ft_putchar(hex[p % 16]);
	}
	return (i);
}