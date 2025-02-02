/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:12:37 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/30 15:09:27 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		count;

	if (!dst || !src)
		return (0);
	i = 0;
	count = 0;
	while (src[count])
		count++;
	while (i < size)
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (count);
}
