/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:55:30 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/20 13:23:48 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
#include <stdio.h> */

#include "libft.h"
 
int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
		return(1);
	return(0);
}

/* int main()
{
    int a;
    a = 129;
	printf("%d\n", ft_isascii(a));
} */