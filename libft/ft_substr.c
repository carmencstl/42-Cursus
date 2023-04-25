/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:12:16 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/25 16:27:43 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i] && i < len && i + start < ft_strlen(s))
	{
		dest[i] = s[i + start];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
