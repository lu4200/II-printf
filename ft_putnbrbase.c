/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:00:13 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/18 15:43:17 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_nbr_base(long n, int base, char type, size_t count)
{
	char		*bigsymbols;
	char		*lilsymbols;

	bigsymbols = "0123456789ABCDEF";
	lilsymbols = "0123456789abcdef";
	if (type == 'x')
		bigsymbols = lilsymbols;
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_put_nbr_base(-n, base, type, count + 1));
	}
	else if (n < base)
		return (ft_putchar(bigsymbols[n]));
	else
	{
		return (ft_put_nbr_base(n / base, base, type, count + 1));
	}
}
