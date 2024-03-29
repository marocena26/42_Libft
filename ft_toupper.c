/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarocen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:19:12 by maarocen          #+#    #+#             */
/*   Updated: 2023/04/19 19:28:35 by maarocen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función toupper() toma un único argumento en forma entero.
 * VALOR DEVUELTO
 * Devuelve el entero restandole las 32 posiciones que hacen que pase de
 * minuscula a mayuscula.*/
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	return (c);
}
