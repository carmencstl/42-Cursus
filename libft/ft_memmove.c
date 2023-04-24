/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:46:45 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/24 10:22:54 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	if (n > 0)
	{
		*(char *)dst = *(char *)src;
		ft_memcpy((char *)dst + 1, (char *)src + 1, n - 1);
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*s;

	dest = (char *)dst;
	s = (const char *)src;
	if (s > dest)
	{
		ft_memcpy(dst, src, n);
	}
	else if (s == dest)
	{
		return (dest);
	}
	else
	{
		s += n - 1;
		dest += n - 1;
		while (n--)
		{
			*dest-- = *s--;
		}
	}
	return (dst);
}

/* int main()
{
    char dst[5] = "LOL";
    char src[] = "hello world";
    size_t n;
    n = 3;
    ft_memmove(dst, src, n);
    printf("%s\n", dst);
    printf("%s\n", ft_memmove(dst, src, n));
} */