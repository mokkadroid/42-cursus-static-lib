/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:04:53 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/24 17:04:56 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static short	is_member(char const *set, char const c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*trim;
	
	end = 0;
	start = 0;
	while (s1[end])
		end++;
	while (s1[start] && is_member(set, s1[start]))
		start++;
	end--;
	while (end >= 0 && is_member(set, s1[end]))
		end--;
	i = 0;
	trim = NULL;
	trim = (char *)malloc(sizeof(char) * ((end - start) + 1));
	if (!trim)
		return (NULL);
	while (start <= end)
	{
		trim[i] = s1[start];
		start++;
		i++;
	}
	trim[i+1] = '\0';
	return trim;
}

