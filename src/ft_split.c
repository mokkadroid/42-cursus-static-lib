/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:05:29 by lumarti3          #+#    #+#             */
/*   Updated: 2025/02/03 14:49:22 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/********** Private functions declaration **********/
/**
 * Name: junk_cleaner
 * Parameter:
 * s2 -> pointer to array of pointers
 * idx -> position of the array from which it starts to
 * 		  the pointers.
 * Description:
 * Frees an array of pointers
 */

static void	junk_cleaner(char **s2, int idx);

/**
 * Name: slice_filler
 * Parameter:
 * s -> string to find the slice
 * c -> separator character
 * shift -> shift needed to override the separator c
 * Description:
 * Returns a string with the characters found in s before encountering
 * the separator c or the EOS sign. Also stores in shift the displacement
 * needed to apply to s in case it encounters the separator char to 
 * override it to keep analysing the string.  
 */

static char	*slice_filler(char const *s, char c, int *shift);

/**
 * Name: slices_count
 * Parameter:
 * s -> slice with character c as separator
 * c -> separator character
 * Description:
 * Returns the number of subtrings/slices in s with c as separator
 */

static int	slices_count(char const *s, char c);

/***************************************************/

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		shift;
	int		count;
	char	**split;

	count = slices_count(s, c);
	split = (char **)malloc(sizeof(char *) * count);
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (j < count && s[i])
	{
		split[j] = slice_filler(&s[i], c, &shift);
		if (!split[j])
		{
			junk_cleaner(split, j - 1);
			return (NULL);
		}
		j++;
		i += shift;
	}
	return (split);
}

static char	*slice_filler(char const *s, char c, int *shift)
{
	int		i;
	char	*slice;

	i = 0;
	*shift = (*s == c);
	s += (*s == c);
	while (*s != c && *s)
	{
		i++;
		s++;
	}
	*shift += i;
	slice = (char *)malloc(sizeof(char) * (i + 1));
	if (!slice)
		return (NULL);
	slice[--i] = '\0';
	s--;
	while (i >= 0)
	{
		slice[i--] = *s;
		s--;
	}
	return (slice);
}

static int	slices_count(char const *s, char c)
{
	int	i;
	int	count;

	if (!s)
		return (0);
	count = 1;
	i = 1;
	while (s[i] != '\0')
	{
		count += (s[i - 1] != c && s[i] == c && s[i + 1]);
		i++;
	}
	return (count);
}

static void	junk_cleaner(char **s2, int idx)
{
	if (s2)
	{
		while (idx >= 0)
		{
			free(s2[idx]);
			idx--;
		}
		free(s2);
	}
}
