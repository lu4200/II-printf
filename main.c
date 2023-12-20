/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:50:54 by lucas             #+#    #+#             */
/*   Updated: 2023/12/20 16:42:10 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	int count;
	char p[] = "bonjour";
	
	count = ft_printf("Hello %p\n", p);
	ft_printf("les caracteres lu sont au nombre de : %d\n", count);
	count = printf("Hello %p\n", p);
	printf("les caracteres lu sont au nombre de : %d\n", count);
}