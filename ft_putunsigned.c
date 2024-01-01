/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:04:32 by lucas             #+#    #+#             */
/*   Updated: 2023/12/29 18:49:55 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned long n)
{
	size_t	count;

	count = 0;
	if (n >= 0 && n < 10)
		count += ft_putchar(n + '0');
	else
		count += ft_putnbr(n);
	return (count);
}