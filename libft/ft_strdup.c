/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:44:35 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/25 15:07:41 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

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

char	*ft_strdup(const char *src)
{
	int		len;
	char	*dest;
	int		i;

	i = 0;
	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while ((char)src[i] != '\0')
	{
		dest[i] = (char)src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
