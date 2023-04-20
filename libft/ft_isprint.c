/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:53:42 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/20 13:23:54 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
#include <stdio.h> */

#include "libft.h"

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
		return(1);
	return(0);
}

/* int main()
{
    int a;
    a = 152;
	printf("%d\n", ft_isprint(a));
} */