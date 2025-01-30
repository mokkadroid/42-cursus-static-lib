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

	sb = NULL;
	sb = (char *)malloc(sizeof(char) * (len + 1));
	if (!sb)
		return NULL;
	i = start;
	j=0;
	while (j < len && s[i] != '\0')
	{
		sb[j] = s[i];
		j++;
		i++;
	}
	sb[j] = '\0';
	return (sb);
}
