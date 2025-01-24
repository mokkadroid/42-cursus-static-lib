#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include <ctype.h>

int	ft_tolower(int c){
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	ft_toupper(int c){
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main(void)
{
	for (int i = 0; i < 128; i++)
	{
		printf("%c -> 2lo: %c, 2loft: %c, 2up: %c, 2upft: %c\n", i, tolower(i), ft_tolower(i), toupper(i), ft_toupper(i));
	}
	return 0;
}