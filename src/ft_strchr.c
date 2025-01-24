/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:11:35 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/21 15:11:39 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return ((char *)s);
        s++;
    }
    return ((char *)s);
}
