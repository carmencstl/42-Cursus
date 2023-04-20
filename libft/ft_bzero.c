/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:37:47 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/20 13:44:13 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */ 

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *ptr;
    ptr = s;
    while (n-- > 0)
    {
        *ptr++ = 0; 
    }
}

/* int main()
{
    char s[] = "Hola";
    memset(s, 'a', sizeof(s));
    printf("Antes de bzero: %s\n", s);

    ft_bzero(s, sizeof(s));
    printf("Después de bzero: %s\n", s);

    return 0;
} */

