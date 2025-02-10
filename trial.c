#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <bsd/string.h>
#include <ctype.h>
#include "libft.h"

void foo(unsigned int i, char *c)
{
	*c += i;
}
int main(void)
{
	printf("%d\n", atoi(" 9 "));
	return 0;
}