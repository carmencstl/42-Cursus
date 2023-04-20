/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:07:05 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/20 13:24:28 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
#include <stdio.h> */

#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c += 32;
    }
    return (c);
}   

/* int main(void)
{
    int a;
    a = 'A';
    printf("%d", ft_toupper(a));
} */