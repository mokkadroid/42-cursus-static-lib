#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include <ctype.h>

static void	decomp(char *s, int n, int pos)
{
	int	i;
	int	lim;
	int	dec;

	i = pos;
	dec = (n * (1 - 2 * (n < 0)));
	lim = (n < 0);
	s[0] = ('-' * (n < 0));
	while (i >= lim && dec > 0)
	{
		s[i] = ((dec % 10) + 48);
		i--;
		dec /= 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	int		count;
	char	c[12];

	i = 0;
	count = (n * (1 - 2 * (n < 0)));;
	while (count > 0)
	{
		count /= 10;
		i++;
	}
	i += (n < 0);
	c[i] = '\0';
	count = i;
	i--;
	decomp(c, n, i);
	write(fd, c, count);
}

int main(void)
{
	char s[] = "AjbAvbdAehbAjbA";
	printf("%s\n", s);
	ft_putnbr_fd(10, 1);
	return 0;
}