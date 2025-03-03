/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:04:53 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/30 15:16:50 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/********** Private functions declaration **********/
/**
 * Name: is_member
 * Parameter:
 * set -> set of chars in string format (ends in '\0')
 * c -> c to check whether it is present or not in the set
 * Description:
 * Checks if c pertains to a given set of chars, returns 1 
 * if true, 0 if false.
 */

static short	is_member(char const *set, char const c);

/**
 * Name: get_extremes
 * Parameter:
 * s -> input string
 * set -> set of limiter chars
 * fi -> position of the first char (starting from the index 0
 * 		 of the string) that is not a member of the set
 * li -> position of the first char (starting from the index size - 1
 * 		 of the string) that is not a member of the set
 * Description:
 * Stores in fi the initial position of the trim and the last 
 * position of the trim in li.
 */

static void		get_extremes(char const *s, char const *set, int *fi, int *li);

/***************************************************/

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*trim;

	if (!*s1)
		return ((char *)s1);
	get_extremes(s1, set, &start, &end);
	i = 0;
	trim = (char *)malloc(sizeof(char) * ((end - start) + 1));
	if (!trim)
		return (NULL);
	while (start <= end)
	{
		trim[i] = s1[start];
		start++;
		i++;
	}
	trim[i + 1] = '\0';
	return (trim);
}

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

static void	get_extremes(char const *s, char const *set, int *fi, int *li)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j])
		j++;
	j--;
	while (s[i] && is_member(set, s[i]))
		i++;
	while (j >= 0 && is_member(set, s[j]))
		j--;
	*fi = i;
	*li = j;
}
