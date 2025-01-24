/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:11:01 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/21 15:11:07 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (!dest || !src || dest == src)
		return (dest);
	if (dest <= src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	return (dest);
}
