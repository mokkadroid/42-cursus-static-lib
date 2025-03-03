#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <bsd/string.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
 	char buff1[0xF00] = "there is no stars in the sky";
 	char buff2[0xF00] = "there is no stars in the sky";
 	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
 	size_t r1 = strlcat(buff1, str, max);
 	size_t r2 = ft_strlcat(buff2, str, max);
	printf("dst: %lu src: %lu\n", strlen(str), strlen(buff1));
	printf("dst: %lu src: %lu\n", ft_strlen(str), ft_strlen(buff2));
	printf("bsd: %s %lu\nlft: %s %lu\n", buff1, r1, buff2, r2);
 
 	if (r1 != r2){
		printf("return value\n");
		exit(-1);
	}
 	char s1[4] = "";
 	char s2[4] = "";
 	r1 = strlcat(s1, "thx to ntoniolo for this test !", 4);
 	r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
	printf("bsd: %s\nlft: %s", s1, s2);
 	if (r1 != r2){
		printf("return value\n");
		exit(-1);
	}
 	exit(0);

}