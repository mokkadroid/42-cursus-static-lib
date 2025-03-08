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

	i = 0;
	count = -1;
	while (s[i] != '\0')
	{
		if ((s[i] % 256) == (c % 256))
			count = i;
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	if (count < 0)
		return (0x0);
	return ((char *)&s[count]);
}
