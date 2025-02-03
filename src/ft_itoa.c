/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:25:27 by lumarti3          #+#    #+#             */
/*   Updated: 2025/02/03 14:40:59 by lumarti3         ###   ########.fr       */
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
/* static int		absolute(int n);*/
/*No longer in use, the branchless statement is 1 line */

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

	if (n == -2147483648)
		return ("-2147483648");
	i = 0;
	count = (n * (1 - 2 * (n < 0)));
	while (count > 0)
	{
		count /= 10;
		i++;
	}
	i += (n < 0);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	decomp(str, n, i);
	return (str);
}

static void	decomp(char *s, int n, int pos)
{
	int	i;
	int	lim;
	int	dec;

	i = pos;
	dec = (n * (1 - 2 * (n < 0)));
	lim = (n < 0);
	s[0] = ('-' * (n < 0));
	while (i >= lim && dec > 0)
	{
		s[i] = ((dec % 10) + 48);
		i--;
		dec /= 10;
	}
}
