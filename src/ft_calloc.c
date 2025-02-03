/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:08:06 by lumarti3          #+#    #+#             */
/*   Updated: 2025/02/03 14:33:31 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*p;

	if (nmemb < 1 || size < 1)
		return (NULL);
	p = NULL;
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		((unsigned char *)p)[i] = 0;
		i++;
	}
	return (p);
}
