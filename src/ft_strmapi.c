/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:25:46 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/24 19:25:50 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*modif;

	i = 0;
	while (s[i] != '\0')
		i++;
	modif = (char *)malloc(sizeof(char) * (i + 1));
	if (!modif)
		return (NULL);
	modif[i] = '\0';
	i--;
	while (i >= 0)
	{
		modif[i] = f((unsigned int)i, s[i]);
		i--;
	}
	return (modif);
}
