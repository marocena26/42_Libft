/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarocen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:37:34 by maarocen          #+#    #+#             */
/*   Updated: 2023/03/17 17:27:48 by maarocen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*DESCRIPCIÓN:/ 
La función strlcpy() se utiliza para copiar cadenas de caracteres de
una cadena de origen a una cadena de destino, y también se asegura de que la 
cadena de destino no se desborde. 
VALOR DEVUELTO
La función strlcpy() devuelve lel tamaño de la cadena de origen.
*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	if (dstsize != 0)
	{
		while (src [i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}
