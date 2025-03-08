/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:03:26 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/30 15:19:42 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @warning MALLOC
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sb;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s);
	while (start < j && s[start + i])
		i++;
	if (i < len)
		len = i;
	if (!*s || start >= j)
		len = 0;
	sb = (char *)ft_calloc(len + 1, sizeof(char));
	if (!sb)
		return (NULL);
	j = 0;
	i = start;
	while (j < len && s[i] != '\0')
	{
		sb[j] = s[i];
		j++;
		i++;
	}
	return (sb);
}
