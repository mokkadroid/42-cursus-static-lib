/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:13:51 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/30 15:14:56 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	const char	*p;

	if (*little == '\0')
		return ((char *)(big));
	if (*big == '\0')
		return (NULL);
	i = 0;
	if (len < 0)
		len = ft_strlen(big);
	while (i < len)
	{
		j = 1;
		if (big[i] == little[0])
		{
			p = &big[i];
			while (little[j] == big[i + j] && i + j < len && little[j] != '\0')
				j++;
			if (little[j] == '\0')
				return ((char *)p);
		}
		i++;
	}
	return (NULL);
}
