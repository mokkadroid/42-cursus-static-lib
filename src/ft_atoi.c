/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:07:23 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/21 15:07:34 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_atoi_aux: converts ascii code to int value
 */

int	ft_atoi(const char *nptr)
{
	int	pow;
	int	j;
	int	num;

	if (!nptr)
		return (0);
	j = 0;
	pow = 1;
	while (nptr[j] != '\0')
	{
		if (nptr[j] < '0' || nptr[j] > '9')
			return (0);
		pow *= 10;
		j++;
	}
	num = 0;
	j = 0;
	while (nptr[j] != '\0')
	{
		num += ((nptr[j] - 48) * (pow / 10));
		pow /= 10;
		j++;
	}
	return (num);
}
