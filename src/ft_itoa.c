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
	count = ((n + (n == -2147483648)) * (1 - 2 * (n < 0)));
	while (count > 0)
	{
		count /= 10;
		i++;
	}
	i += (n <= 0);
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
	dec = ((n + (n == -2147483648)) * (1 - 2 * (n < 0)));
	if (!dec)
	{
		s[pos] = 48;
		return;
	}
	lim = (n < 0);
	s[0] = ('-' * (n < 0));
	while (i >= lim && dec > 0)
	{
		s[i] = ((dec % 10) + 48);
		i--;
		dec /= 10;
	}
	s[pos] += (n == -2147483648);
}
