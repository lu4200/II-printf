/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:32:00 by lucas             #+#    #+#             */
/*   Updated: 2023/12/18 13:33:37 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i] && dstsize > 0)
	{
		dest[i] = src[i];
		i++;
	}
	if (dest > 0)
		dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

size_t  ft_strlen()
{
    int i;
    
}