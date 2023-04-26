/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:49:45 by cacastil          #+#    #+#             */
/*   Updated: 2023/04/26 14:01:32 by cacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*nstr;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && strchr(set, s1[end - 1]))
		end--;
	nstr = malloc(sizeof(*nstr) * (end - start + 1));
	if (!nstr)
		return (NULL);
	strncpy(nstr, s1 + start, end - start);
	nstr[end - start] = '\0';
	return (nstr);
}
