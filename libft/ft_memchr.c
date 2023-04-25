/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:42:46 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/25 11:12:01 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s1, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] == (unsigned char)c)
			return (&((char *)s1)[i]);
		i++;
	}
	return (NULL);
}
