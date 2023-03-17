/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarocen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:35:19 by maarocen          #+#    #+#             */
/*   Updated: 2023/03/17 18:01:06 by maarocen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*DESCRIPCIÓN:/ 
La función strlcat() se utiliza para concatenar dos cadenas de caracteres 
(strings) de manera segura, lo que significa que evita los problemas de 
desbordamiento de búfer que podrían ocurrir al usar otras funciones de 
concatenación de cadenas.*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (dst[i] != '\0' && i < (dstsize - 1))
		i++;
	while (i < (dstsize - 1) && *src)
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
