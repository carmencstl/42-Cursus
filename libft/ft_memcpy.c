/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:03:51 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/21 12:16:12 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    if (n > 0)
    {
        *(char *)dst = *(char *)src;
         ft_memcpy((char *)dst + 1, (char *)src + 1, n - 1);
    }
    return dst;
}

/* int main()
{
    char str1[] = "Hola Mundo";
    char str2[14];
    ft_memcpy(str1, str2, sizeof(str1));

    printf("%s", str2);

    return 0;
} */