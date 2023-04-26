/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:00:14 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/26 14:18:50 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"
#include <stdio.h>

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
		if (s[i] != c)
			count++;
			while (s[i] && s[i] != c)
				i++;
		else 
			i++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] != c)
			k = 0;
		while (s[i + k] && s[i + k] != c)
			k++;
		arr[j++] = ft_substr(s, i, k);
		i += k;
		else i++;
	}
	arr[j] = NULL;
	return (arr);
}
 */