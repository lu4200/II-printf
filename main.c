/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:50:54 by lucas             #+#    #+#             */
/*   Updated: 2024/01/06 13:04:49 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	int count;
	char *p = NULL;
	
	
	count = ft_printf("Hello %p\n", p);
	ft_printf("les caracteres lu sont au nombre de : %d\n", count);
	count = printf("Hello %p\n", p);
	printf("les caracteres lu sont au nombre de : %d\n", count);
	printf("%c", '\n');

	count = ft_printf("Hello %s\n", p);
	ft_printf("les caracteres lu sont au nombre de : %d\n", count);
	count = printf("Hello %s\n", p);
	printf("les caracteres lu sont au nombre de : %d\n", count);
	printf("%c", '\n');
	
	count = ft_printf("Hello %x\n", -133);
	ft_printf("les caracteres lu sont au nombre de : %d\n", count);
	count = printf("Hello %x\n", -133);
	printf("les caracteres lu sont au nombre de : %d\n", count);
	printf("%c", '\n');

	count = ft_printf("Hello %x\n", 133777);
	ft_printf("les caracteres lu sont au nombre de : %d\n", count);
	count = printf("Hello %x\n", 133777);
	printf("les caracteres lu sont au nombre de : %d\n", count);
	printf("%c", '\n');

	count = ft_printf("Hello %X\n", -133);
	ft_printf("les caracteres lu sont au nombre de : %d\n", count);
	count = printf("Hello %X\n", -133);
	printf("les caracteres lu sont au nombre de : %d\n", count);
	printf("%c", '\n');

	count = ft_printf("Hello %X\n", 133777);
	ft_printf("les caracteres lu sont au nombre de : %d\n", count);
	count = printf("Hello %X\n", 133777);
	printf("les caracteres lu sont au nombre de : %d\n", count);
	printf("%c", '\n');

	count = ft_printf("Hello %u\n", 133777);
	ft_printf("les caracteres lu sont au nombre de : %u et pas %i \n", count, -77);
	count = printf("Hello %u\n", 133777);
	printf("les caracteres lu sont au nombre de : %u et pas %i \n", count, -77);
	printf("%c", '\n');

	count = ft_printf("Hello %s\n", p);
	ft_printf("les caracteres lu sont au nombre de : %%\n");	
	count = printf("Hello %s\n", p);
	printf("les caracteres lu sont au nombre de : %%\n");
	printf("%c", '\n');

	ft_printf("Bonjour %s, Je m'appellle %s, j'ai %d ans et je suis chez Ecole %u", "Emre", "Lucas", 19, -42);
	write (1, "\n", 1);
	printf("Bonjour %s, Je m'appellle %s, j'ai %d ans et je suis chez Ecole %u", "Emre", "Lucas", 19, -42);
}
