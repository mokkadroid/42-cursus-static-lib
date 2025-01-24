/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:13:51 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/21 15:13:56 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	int			j;
	const char	*p;

	if (*little == "")
		return ((char *)big);
	i = 0;
	while (i < len)
	{
		if (big[i] == little[0])
		{
			p = &big[i];
			j = 1;
			while (little[j] == big[i] && i < len && little[j] != '\0')
			{
				i++;
				j++;
			}
			if (little[j] == '\0')
				return ((char *)p);
		}
		i++;
	}
	return (NULL);
}
