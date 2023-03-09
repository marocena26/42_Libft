/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarocen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:49:45 by maarocen          #+#    #+#             */
/*   Updated: 2023/03/09 17:19:16 by maarocen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
// #include<stdio.h>
// int	main(void)
// {
// 	int	c;

// 	c = '2';
// 	ft_isdigit(c);
// 	printf("%d", ft_isdigit(c));
// }
