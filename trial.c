#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <strings.h>
#include <bsd/string.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	char *ft, *lc, str2[] = "bonjour";

	for (int i = 0; i < 100; i++)
 	{
 		char n[15];
 		sprintf(n, "%i", rand());
 		int i1 = atoi(n);
 		int i2 = ft_atoi(n);
		printf("num: %s -> lc: %d, ft: %d\n", n, i1, i2);
 		if (i1 != i2)
 		{
			write(1, "kpoot\n", 7);
 			exit(1);
 		}
 	}
 	exit(0);
}