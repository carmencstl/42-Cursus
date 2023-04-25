/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:08:56 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/25 11:42:07 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	s2_n;

	s2_n = ft_strlen(s2);
	if (s2_n == 0)
		return ((char *)s1);
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] == s2[0])
		{
			j = 1;
			while (s2[j] != '\0' && s1[i + j] == s2[j] && i + j < n)
				j++;
			if (s2[j] == '\0')
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}

/* int	main(void) {
    char str[] = "¡Hola Mundo!";
    char substr[] = "Mundo";
    
    char *result = strnstr(str, substr, strlen(str));
    
    if (result) {
        printf("Se encontró la subcadena '%s' en '%s'\n", substr, str);
        printf("La subcadena comienza en el índice
		%ld de la cadena principal\n", result - str);
    } else {
        printf("La subcadena '%s' no se encontró en '%s'\n", substr, str);
    }
    
    return (0);
}
 */