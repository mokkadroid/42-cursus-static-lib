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
 * Parameters:
 * s2 -> pointer to array of pointers
 * idx -> position of the array from which it starts to
 * 		  the pointers.
 * Description:
 * Frees an array of pointers
 */
static void	junk_cleaner(char **s2, int idx);

/**
 * Name: slice_filler
 * Parameters:
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
 * @param s -> slice with character c as separator
 * @param c -> separator character
 * Description:
 * Returns the number of subtrings/slices in s with c as separator
 */
static int	slices_count(char const *s, char c);

/**
 * Name: separator_shift
 * Parameters:
 * s -> string to "trim" the separators
 * c -> separator char
 * Description:
 * Returns the shift to add to the pointer of S to find non-separator
 * chars. 
 */
static int	separator_shift(const char *s, char c);

/***************************************************/

char	**ft_split(char const *s, char c)
{
	int		j;
	int		shift;
	int		count;
	char	**split;

	count = slices_count(s, c);
	split = (char **)malloc(sizeof(char *) * count + 1);
	if (!split)
		return (NULL);
	split[count] = NULL;
	j = 0;
	if (count == 1 && *s == '\0')
		split[j++] = slice_filler(s, c, &shift);
	while (j < count)
	{
		split[j] = slice_filler(s, c, &shift);
		if (!split[j++])
		{
			junk_cleaner(split, j - 1);
			return (NULL);
		}
		s += shift;
	}
	return (split);
}

static char	*slice_filler(char const *s, char c, int *shift)
{
	int		i;
	char	*slice;

	i = 0;
	*shift = separator_shift(s, c);
	s += *shift;
	while (*s != c && *s)
	{
		i++;
		s++;
	}
	*shift += i;
	slice = (char *)malloc(sizeof(char) * (i + 1));
	if (!slice)
		return (NULL);
	i += (i == 0);
	slice[--i] = '\0';
	s--;
	while (i >= 0 && *s != c)
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
	count = 0;
	i = (s[0] == c);
	while (s[i] != '\0')
	{
		while (s[i] && s[i] != c)
			i++;
		count += ((s[i] != c && s[i - 1] == c) || (!i && s[i] != c));
		i++;
	}
	return (count + (count == 0));
}

static int	separator_shift(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c)
		i++;
	return (i);
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
