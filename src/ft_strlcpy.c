/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:12:37 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/23 13:44:19 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * strlcat() appends string	src to the end of dst.	It will	append at most
       dstsize	- strlen(dst) -	1 characters.  It will then NUL-terminate, un-
       less dstsize is 0 or the	original dst string was	 longer	 than  dstsize
       (in  practice this should not happen as it means	that either dstsize is
       incorrect or that dst is	not a proper string).
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;
	int	count;

	if (!dst || !src)
		return (0);
	i = 0;
	while (dst[i] != '\0')
		i++;
	count = i;
	j = 0;
	while (src[j] != '\0')
		j++;
	count += j;
	if (i >= size - 1)
		return (count);
	j = 0;
	while (i < size - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (count);
}
