/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:12:24 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/24 10:26:41 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*temp_b;

	temp_b = b;
	while (len--)
	{
		*temp_b++ = c;
	}
	return (b);
}

/* int main()
{
    char str[] = "Hola a todos";
    printf("Original string: %s\n", str);
    
    ft_memset(str, 'a', 2);
    printf("New string: %s\n", str);
} */