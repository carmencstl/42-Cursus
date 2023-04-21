/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:46:45 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/21 14:05:11 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

void 	*ft_memmove(void *dst, const void *src, size_t n)
{
    char* dest = (char*) dst;
    const char*  s = (const char*) src;
        if(s > dest)
        {
            ft_memcpy(dst, src, n);
        }
        else if(s == dest)
        {
            return dest;
        }
        else
        {
            s += n - 1;
            dest += n - 1;
            while(n--)
            {
                *dest-- = *s--;   
            }
        }
        return (dst);     
}

int main()
{
    char dst[5] = "LOL";
    char src[] = "hello world";
    size_t n;
    n = 5;
    ft_memmove(dst, src, n);
    printf("%s\n", dst);
    printf("%s\n", ft_memmove(dst, src, n));
}