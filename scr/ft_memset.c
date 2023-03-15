/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarocen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:14:54 by maarocen          #+#    #+#             */
/*   Updated: 2023/03/15 16:22:39 by maarocen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	a;
	size_t			i;

	ptr = (unsigned char *)b;
	a = (unsigned char)c;
	i = 0;
	while (i <= len)
	{
		ptr[i] = a;
		i++;
	}
	return (ptr);
}
