/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:25:27 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/30 14:44:51 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/********** Private functions declaration **********/
/**
 * Name: absolute
 * Parameters:
 * n -> integer to calculate the absolute value
 * Description:
 * Returns the absolute value of a signed integer applying 
 * branchless programming: (n * (1 - 2 * (n < 0)))
 * How does this works?
 * The expression "n < 0" acts similar to the operators || 
 * and &&, returning 1 if the condition is met or not.
 * Therefore, (1 - 2 * (n < 0)) will two pssible results: 
 * (1 - 2 * 1) = -1 if n < 0 or (1 - 2 * 0) = 1 if not,
 *  which will always return a positive value.
 */

static int		absolute(int n);

/**
 * Name: decomp
 * Parameter:
 * n -> number to decompose in ASCII codes
 * pos -> position in s to start the writing of the decomposition results
 * s -> string to store the ASCII char decomposition of n
 * Description:
 * Returns the absolute value of a signed integer
 */

static void		decomp(char *s, int n, int pos);

/***************************************************/

char	*ft_itoa(int n)
{
	int		i;
	int		count;
	char	*str;

	i = 0;
	count = absolute(n);
	while (count > 0)
	{
		count /= 10;
		i++;
	}
	if (n < 0)
		i++;
	str = NULL;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	decomp(str, n, i);
	return (str);
}

static int	absolute(int n)
{
	return (n * (1 - 2 * (n < 0)));
}

static void	decomp(char *s, int n, int pos)
{
	int	i;
	int	lim;
	int	dec;

	i = pos;
	dec = absolute(n);
	lim = 0;
	if (n < 0)
	{
		s[0] = '-';
		lim = 1;
	}
	while (i >= lim && dec > 0)
	{
		s[i] = ((dec % 10) + 48);
		i--;
		dec /= 10;
	}
}
