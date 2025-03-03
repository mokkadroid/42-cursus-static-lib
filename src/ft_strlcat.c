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
	size_t	len;
	size_t	n;

	i = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	len =  &dst[i] - &dst[0];
	n = size - len;
	if (n == 0)
		return (len + ft_strlen(src));
	j = 0;
	while (src[j] != '\0')
	{
		if (i < (n - 1))
			dst[i++] = src[j++];
		else
			j++;
	}
	dst[i] = '\0';
	return (len + (&src[j] - &src[0]));
}
