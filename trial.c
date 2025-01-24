#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include <ctype.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sb;
	unsigned int	i;
	unsigned int	j;

	sb = NULL;
	sb = (char *)malloc(sizeof(char) * (len + 1));
	if (!sb)
		return NULL;
	i = start;
	j=0;
	while (j < len && s[i] != '\0')
	{
		sb[j] = s[i];
		j++;
		i++;
	}
	sb[j] = '\0';
	return (sb);
}

int main(void)
{
	char str[] = "0123456789ABCDEF", *s=NULL;
	s = ft_substr(str, 2, 18);
	printf("ft: %s\nlb: %s\n", s, str);
	return 0;
}