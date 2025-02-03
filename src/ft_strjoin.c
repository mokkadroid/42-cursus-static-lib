/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:03:54 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/30 15:07:54 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	char	*join;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	join = (char *)malloc(sizeof(char) * (i + j + 1));
	if (!join)
		return (NULL);
	join[i + j] = '\0';
	k = (i--) + (j--) - 1;
	while (k >= 0)
	{
		if (j >= 0)
			join[k--] = s2[j--];
		else
			join[k--] = s1[i--];
	}
	return (join);
}
