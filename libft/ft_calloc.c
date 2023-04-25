/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:43:37 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/25 15:33:42 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr != NULL)
	{
		ft_memset(ptr, 0, count * size);
	}
	return (ptr);
}
