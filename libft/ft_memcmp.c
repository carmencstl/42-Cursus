/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:14:05 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/25 14:42:46 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;
	int					result;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	result = 0;
	while (i < n && result == 0)
	{
		result = (int)p1[i] - (int)p2[i];
		i++;
	}
	return (result);
}
