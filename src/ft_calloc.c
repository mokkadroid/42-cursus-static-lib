/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:08:06 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/23 13:43:33 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		i;
	void	*p;
	char	*iter;

	if (nmemb < 1 || size < 1)
		return (NULL);
	p = NULL;
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	iter = p;
	i = 0;
	while (i < (nmemb * size))
	{
		iter[i] = 0;
		i++;
	}
	return (p);
}
