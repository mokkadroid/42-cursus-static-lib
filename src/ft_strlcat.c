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

/**
 * char *d = dst;
	const char *s = src;
	size_t n = size;
	size_t dlen;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = size - dlen;
	if (n == 0)
		return(dlen + ft_strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return(dlen + (s - src));
 */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	n;

	i = 0;
	while (dst[i] != '\0')
		i++;
	len =  &dst[i] - &dst[0];
	n = size - len;
	if (n == 0)
		return (len + ft_strlen(src));
	j = 0;
	while (i < (n - 1) && src[j] != '\0')
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (len + (&src[j] - &src[0]));
}
