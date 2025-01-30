#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include <ctype.h>

static int	slices_count(char const *s, char c)
{
	int		i;
	int		count;

	if(!s)
		return (0);
	count = 1;
	i = 1;
	while (s[i] != '\0')
	{
		if (s[i - 1] != c && s[i] == c && s[i + 1] != '\0')
			count ++;
		i++;
	}
	return (count);
}

static int	*slices_idx(char const *s, char c, int count)
{
	int	i;
	int	j;
	int size;
	int *slices;

	i = 0;
	j = 0;
	size = 1;
	slices = (int *) malloc(sizeof(int) * count * 2);
	if (!slices)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i != 0 && s[i] == c)
		{
			slices[j + 1] = size;
			j += 2;
		} 
		else if ((s[i] != c && i > 0 && s[i - 1] == c) || (!i && s[i] != c))
		{
			slices[j] = i;
			size = 1;
		} 
		else if (s[i] != c)
				size++;
		i++;
	}
	slices[j + 1] = size;
	return (slices);
}

int main(void)
{
	int *idx = NULL, n;
	char s[] = "jbvbdAehbAjbA", c = 'A';
	for (size_t i = 0; i < 15; i++)
		if (s[i] == c) printf("%ld ", i);
	n = slices_count(s, c); 
	idx = slices_idx(s, c, n);

	for (int i = 0; i < n * 2 - 1; i+= 2)
		printf("\n[%d, %d]", idx[i], idx[i+1]);
	return 0;
}