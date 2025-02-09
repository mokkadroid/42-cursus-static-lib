/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:12:13 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/30 15:08:25 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	count;

	if (!dst || !src)
		return (0);
	i = 0;
	while (dst[i] != '\0')
		i++;
	count = i;
	j = 0;
	while (src[j] != '\0')
		j++;
	count += j;
	if (i >= size - 1)
		return (count);
	j = 0;
	while (i < size - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (count);
}
