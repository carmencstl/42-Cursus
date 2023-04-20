/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:21:29 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/20 16:09:55 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	x;
	unsigned int	y;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	x = ft_strlen(dst);
	y = 0;
	while (src[y] != '\0' && x + 1 < dstsize)
	{
		dst[x] = src[y];
		x++;
		y++;
	}
	dst[x] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[y]));
}


/* int main(void)
{
	char dst[20] = "Hello";
	char *src = "World!";
	size_t size = 20;

	size_t len = ft_strlcat(dst, src, size);
	printf("ft_strlcat: dst=\"%s\", src=\"%s\", dstsize=%lu, len=%lu\n", dst, src, size, len);

	return (0);
} */


