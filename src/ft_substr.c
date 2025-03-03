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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sb;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (s[i])
		i++;
	if (!*s || start >= i)
		len = 0;
	sb = (char *)malloc(sizeof(char) * (len + 1));
	if (!sb)
		return (NULL);
	j = len * (start >= i);
	i = start;
	while (j < len && s[i] != '\0')
	{
		sb[j] = s[i];
		j++;
		i++;
	}
	sb[j * (i != start)] = '\0';
	return (sb);
}
