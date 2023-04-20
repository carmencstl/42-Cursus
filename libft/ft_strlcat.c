/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:21:29 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/20 14:03:15 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


unsigned int	contador(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	x;
	unsigned int	y;

	if (dstsize <= contador(dst))
		return (dstsize + contador(src));
	x = contador(st);
	y = 0;
	while (src[y] != '\0' && x + 1 < dstsize)
	{
		dst[x] = src[y];
		x++;
		y++;
	}
	dst[x] = '\0';
	return (contador(dst) + contador(&src[y]));
}
