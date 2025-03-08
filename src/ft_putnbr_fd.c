/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:28:34 by lumarti3          #+#    #+#             */
/*   Updated: 2025/02/03 14:46:52 by lumarti3         ###   ########.fr       */
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

static void	decomp(char *s, int n, int pos);

/***************************************************/

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	int		count;
	char	c[12];

	i = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	count = (n * (1 - 2 * (n < 0)));
	while (count > 0)
	{
		count /= 10;
		i++;
	}
	i += (n < 0);
	c[i] = '\0';
	count = i + (!i);
	i--;
	decomp(c, n, i);
	write(fd, c, count);
}

static void	decomp(char *s, int n, int pos)
{
	int		i;
	int		lim;
	int		dec;

	if (!n)
	{
		s[0] = '0';
		s[1] = '\0';
		return ;
	}
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
