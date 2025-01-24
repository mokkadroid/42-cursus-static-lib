/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumarti3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:14:09 by lumarti3          #+#    #+#             */
/*   Updated: 2025/01/21 15:14:10 by lumarti3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strrchr(const char *s, int c)
{
	int			i;
	int			count;
	const char	*p;

	i = 0;
	count = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count = i;
		i++;
	}
	p = &s[count];
	if (count < 0)
		p = NULL;
	return ((char *)p);
}
