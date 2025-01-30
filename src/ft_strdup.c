/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:11:52 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/30 15:05:08 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
    int		i;
	char	*d;

	i=0;
	while (s[i] != '\0')
		i++;
	d = NULL;
	d = (char *)malloc(sizeof(char)*(i + 1));
	if (!d)
		return (NULL);
	while (i >= 0)
	{
		d[i] = s[i];
		i--;
	}
	return (d);
}

