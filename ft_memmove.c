/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarocen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:26:02 by maarocen          #+#    #+#             */
/*   Updated: 2023/03/17 15:26:04 by maarocen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*DESCRIPCIÓN:/ 
La función memmove() mueve un bloque de memoria de un lugar a otro en la memoria 
de una computadora. Toma tres argumentos: 
- el primer argumento es un puntero al destino donde se moverán los datos
(string), 
- el segundo argumento es un puntero a la fuente de los datos que se van a 
mover (string),
- el tercer argumento es el tamaño en bytes de los datos que se van a mover 
(len - número de bytes)*/
#include "libft.h"
void    *ft_memmove(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*source;
	size_t		i;

	dest = dst;
	source = src;
	i = 0;
	if (dest == NULL && source == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}