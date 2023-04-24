/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:28:05 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/24 14:06:36 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (((char *)s)[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (((char *)s)[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

/* int	main(void)
{
	int		c;

	char = s[] = "Hello";
	c = 'H';
	printf("%s", ft_strchr(s, c));
} */
