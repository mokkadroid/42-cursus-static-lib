/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:07:23 by lumarti3          #+#    #+#             */
/*   Updated: 2025/03/08 17:25:38 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	pow;
	int		j;
	int		i;
	long	num;

	i = 0;
	while ((nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13)) && nptr[i])
		i++;
	if (!nptr[i] && nptr[i] != '+' && nptr[i] != '-' && !ft_isdigit(nptr[i]))
		return (0);
	pow = 1 - (2 * (nptr[i] == '-'));
	i += (nptr[i] == '+' || nptr[i] == '-');
	while (nptr[i] && nptr[i] == '0')
		i++;
	j = i;
	while (nptr[i] && ft_isdigit(nptr[i++]))
		pow *= 10;
	i--;
	num = 0;
	while (j <= i)
	{
		num += ((nptr[j++] - 48) * (pow / 10));
		pow /= 10;
	}
	return (num);
}
