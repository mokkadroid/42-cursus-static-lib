/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:08:47 by lumarti3          #+#    #+#             */
/*   Updated: 2025/02/03 14:35:47 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (8);
	else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (8);
	return (0);
}
