#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include <ctype.h>

static void	junk_cleaner(char **s2, int idx);

static char	*slice_filler(char const *s, char c, int *shift);

static int	slices_count(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		shift;
	int		count;
	char	**split;

	count = slices_count(s, c);
	split = (char **)malloc(sizeof(char *) * count);
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (j < count && s[i])
	{	
		split[j] = slice_filler(&s[i], c, &shift);
		if (!split[j])
		{
			junk_cleaner(split, j - 1);
			return (NULL);
		}
		j++;
		i += shift;
	}
	return (split);
}

static char	*slice_filler(char const *s, char c, int *shift)
{
	int i;
	char *slice;

	i = 0;
	*shift = (*s == c);
	s += (*s == c);
	while (*s != c && *s)
	{
		i++;
		s++;
	}
	*shift += i;
	slice = (char *)malloc(sizeof(char) * (i + 1));
	if (!slice)
		return (NULL);
	slice[--i] = '\0';
	s--;
	while (i >= 0)
	{
		slice[i--] = *s;
		s--;
	}
	return (slice);
}

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
		count += (s[i - 1] != c && s[i] == c && s[i + 1]);
		i++;
	}
	return (count);
}

static void	junk_cleaner(char **s2, int idx)
{
	if (s2)
	{
		while (idx >= 0)
		{
			free(s2[idx]);
			idx--;
		}
		free(s2);
	}
}

int main(void)
{
	int n, j = 0;
	char s[] = "AjbAvbdAehbAjbA", c = 'A', **nn;
	n = slices_count(s, c);
	printf ("%s, %d\n", s, n);
	nn = ft_split(s, c);
	while (j < n)
	{	
		printf("%s\n", nn[j]);
		j++;
	}
	junk_cleaner(nn, j - 1);
	return 0;
}