/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:04:32 by lucas             #+#    #+#             */
/*   Updated: 2023/12/18 19:03:52 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(size_t n)
{
	size_t	i;

	i = 0;
	if (n >= 0 && n < 10)
		i += ft_putchar(n + '0');
	else
	{
		i += ft_put_nbr_base(n / 10, 10, 'u', 0);
		i += ft_put_nbr_base(n % 10, 10, 'u', 0);
	}
	return (i);
}