/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:13:22 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/30 15:13:05 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (i < n && s1[i] && s2[i] && (s1[i] % 256) == (s2[i] % 256))
		i++;
	if (i == n)
		i--;
	c1 = (unsigned char)s1[i];
	c2 = (unsigned char)s2[i];
	return ((c1 % 256) - (c2 % 256));
}
