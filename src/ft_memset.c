/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:11:16 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/21 15:11:18 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;
	void *s;
	void *d;

	if(!dest || !src || dest == src)
		return (dest);
	d = dest + n - 1;
	s = src + n - 1;
	if (s >= dest)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	if (src <= d){
		i = n-1;
		while (i >= 0)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	return (dest);
}


