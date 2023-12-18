/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:50:54 by lucas             #+#    #+#             */
/*   Updated: 2023/12/18 13:21:37 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	int	count;

	count = ft_printf("Hello %s\n", "Lucas");
	ft_printf("les caracteres lu sont au nombre de : %d\n", count);
	count = printf("Hello %s\n", "Lucas");
	printf("les caracteres lu sont au nombre de : %d\n", count);
}