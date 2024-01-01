/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:00:13 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/29 18:48:01 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i += ft_putchar('-');
		if (n == -2147483648)
		{
			i += ft_putchar('2');
			n %= 1000000000;
		}
		i += ft_putnbr(-n);
	}
	else if (n >= 0 && n < 10)
	{
		i += ft_putchar(n + '0');
	}
	else
	{
		i += ft_putnbr(n / 10);
		i += ft_putnbr(n % 10);
	}
	return (i);
}
