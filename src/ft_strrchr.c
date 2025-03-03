/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:14:09 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/30 15:15:29 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	int			count;

	if (!*s)
		return ((char *)s);
	i = 0;
	count = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count = i;
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	else if (c < 0)
		return (NULL);
	return ((char *)&s[count]);
}
