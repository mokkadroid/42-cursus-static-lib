/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:07:23 by lumarti3          #+#    #+#             */
/*   Updated: 2025/02/03 14:29:41 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int parse_str(const char *nptr, int *f, int *l);

int	ft_atoi(const char *nptr)
{
	int	pow;
	int	j;
	int	i;
	int	num;

	if (!nptr)
		return (0);
	pow = parse_str(nptr, &i, &j);
	num = 0;
	while (nptr[j] != '\0')
	{
		i = (nptr[j] >= '0' && nptr[j] <= '9');
		num += ((nptr[j] - 48) * (pow / 10) * i);
		pow /= 10 / (10 - (9 * i));
		j++;
	}
	return (num);
}

static int parse_str(const char *nptr, int *f, int *l)
{
	int	i;
	int pow;
	int	numdig;
	int plus;
	int minus;
	
	i = 0;
	numdig = 0;
	plus = 0;
	minus = 0;
	while (nptr[i] != '\0')
	{
		if ((plus || minus) && (nptr[i] < '0' && nptr[i] > '9'))
			return (0);
		if (numdig && (nptr[i] < '0' && nptr[i] > '9'))
			break;
		numdig += (nptr[i] >= '0' && nptr[i] <= '9');
		plus += (nptr[i] == '+');
		minus += (nptr[i] == '-');
		if ((plus && minus) || plus > 1 || minus > 1)
			return (0);
		*f = i * (numdig == 1);
		*l = i;
	}
	return 1;
}