/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:05:29 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/30 15:04:27 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	junk_cleaner( void *s1 , void **s2, int idx)
{
	if (s1)
		free(s1);
	if (s2)
	{
		while (idx >= 0)
		{
			free(s2[idx]);
				idx--;
		}
		free(idx);
	}
}

static int	slices_count(char const *s, char c)
{
	int		i;
	int		count;

	if(!s)
		return (0);
	count = 1;
	i = 1;
	while (s[i] != '\0')
	{
		if (s[i - 1] != c && s[i] == c && s[i + 1] != '\0')
			count ++;
		i++;
	}
	return (count);
}

static int	*slices_idx(char const *s, char c, int count)
{
	int	i;
	int	j;
	int size;
	int *slices;

	i = 0;
	j = 0;
	size = 1;
	slices = (int *) malloc(sizeof(int) * count * 2);
	if (!slices)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i != 0 && s[i] == c)
		{
			slices[j + 1] = size;
			j += 2;
		} 
		else if ((s[i] != c && i > 0 && s[i - 1] == c) || !i && s[i] != c)
		{
			slices[j] = i;
			size = 1;
		} 
		else if (s[i] != c)
				size++;
		i++;
	}
	return (slices);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		i;
	int		j;
	int		*idx;
	char	**split;

	count = slices_count(s, c);
	split = (char **)malloc(sizeof(char *) * count);
	if (!split)
		return (NULL);
	idx = slices_idx(s, c, count);
	if (!idx)
	{
		free(split);
		return (NULL);
	}
	i = 0;
	j = 0;
	while (i < count)
	{
		split[i] = (char *)malloc(sizeof(char) * idx[j+1]);
		if (!split[i])
		{
			junk_cleaner(idx, split, i-1);
			return (NULL);
		}
		fill_in(s, split[i], &i, idx[j], idx[j+1]);
		i++;
		j+=2;
	}
	free(idx);
	return (split);
}
