/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:03:54 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/24 17:04:17 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
    int		j;
    char	*join;

    i = 0;
    j = 0;
    while (s1[i] != '\0')
        i++;
    while (s2[j] != '\0')
        j++;
    join = NULL;
	join = (char *)malloc(sizeof(char)*(i+j+1));
	if (!join)
		return (NULL);
	join[i+j] = '\0';
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		join[i] = s2[j];
		j++;
		i++;
	}
	return (join);
}
