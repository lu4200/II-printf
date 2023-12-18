/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:14:32 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/18 13:33:57 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_put_nbr_base(long n, int base, char type);
int	ft_putunsigned(size_t n);
int	ft_printf(const char *str, ...);

#endif