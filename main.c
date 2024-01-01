/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:50:54 by lucas             #+#    #+#             */
/*   Updated: 2024/01/02 00:49:51 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	/*int count;
	char p[] = "bonjour";
	
	Les test classicos
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

	count = ft_printf("Hello %d\n", 133777);
	ft_printf("les caracteres lu sont au nombre de : %u et pas %i \n", count, 77);
	count = printf("Hello %d\n", 133777);
	printf("les caracteres lu sont au nombre de : %u et pas %i \n", count, 77);
	printf("%c", '\n');

	count = ft_printf("Hello %s\n", p);
	ft_printf("les caracteres lu sont au nombre de : %%\n");	
	count = printf("Hello %s\n", p);
	printf("les caracteres lu sont au nombre de : %%\n");
	printf("%c", '\n');*/

	ft_printf("Hello %s tu as %dans tu es né le 11/12/ tu es chez École ","Lucas" , "19");	
	printf("\n");
	printf("Hello %s tu as %dans tu es né le 11/12/ tu es chez École","Lucas" , 19);
	printf("%c", '\n');
	
}
