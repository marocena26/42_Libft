/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarocen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:21:55 by maarocen          #+#    #+#             */
/*   Updated: 2023/03/15 19:21:57 by maarocen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst,const void *src,size_t len)
{
    char    *dest;
    const char  *source;
    size_t  i;

    dest = dst;
    source = src;
    i = 0;
    if (dest == NULL && source == NULL)
        return (NULL);
    while (i < len)
    {
        dest[i] = source[i];
        i++;
    }
    return (dest);
}
