#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	i;
	void	*p;
	unsigned char	*iter;/* why unsigned char? because of its size: 1 Byte */

	if (nmemb < 1 || size < 1)
		return NULL;
	p = NULL; /* We set p to null to avoid dangling ptrs */
	p = malloc(nmemb*size);
	if (!p)
		return NULL;
	iter = p;
	i = 0; /* Here we assign 0 to each byte of the array */
	while (i < (nmemb * size))
	{
		iter[i] = 0;
		i++;
	}
	return p;
}