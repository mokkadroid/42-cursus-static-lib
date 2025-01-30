/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:25:27 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/24 19:25:31 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/********** Private functions declaration **********/
/**
 * Name: absolute
 * Parameters:
 * n -> integer to calculate abs
 * Description:
 * Returns the absolute value of a signed integer
 */

static int	absolute(int n);

/**
 * Name: decomp
 * Parameter:
 * n -> number to decompose in ASCII codes
 * pos -> position in s to start the writing of the decomposition results
 * s -> string to store the ASCII char decomposition of n
 * Description:
 * Returns the absolute value of a signed integer
 */

static void	decomp(char *s, int n, int pos);

/***************************************************/

char    *ft_itoa(int n)
{
    int		i;
	int		count;
	char	*str;

	i=1;
	count = absolute(n);
	while ((count /= 10) > 0)
		i++;
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
	if (n < 0)
		return (n * -1);
	return (n);
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
