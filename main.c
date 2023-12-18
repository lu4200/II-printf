/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:50:54 by lucas             #+#    #+#             */
/*   Updated: 2023/12/18 15:43:23 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	int	count;

	count = ft_printf("Hello %s\n", "Lucas");
	ft_printf("les caracteres lu sont au nombre de : %x\n", count);
	count = printf("Hello %s\n", "Lucas");
	printf("les caracteres lu sont au nombre de : %x\n", count);
}