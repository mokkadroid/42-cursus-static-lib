/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:10:25 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/30 14:46:26 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*i;

	if (!s)
		return (NULL);
	i = (unsigned char *)s;
	while (n > 0)
	{
		if (*i == c)
			return (i);
		i++;
		n--;
	}
	i = 0x0;
	return (i);
}
