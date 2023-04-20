/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:50:29 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/20 13:31:47 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
#include <stdio.h> */

#include "libft.h"
 
int ft_isalnum(int c)
{
    if ((c >= 'a' && c <= 'z')
        || (c >= 'A' && c <= 'Z')
        || (c >= 0 && c <= 9))
		return(1);
	return(0);
}

/* int main()
{
    int a;
    a = '+';
	printf("%d\n", ft_isalnum(a));
} */