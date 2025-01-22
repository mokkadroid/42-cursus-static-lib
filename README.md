# 42-cursus-static-lib

## Introduction
Static library composed out of functions from the Standard C Library with my own code implementation.

## Functions
<details>
### <summary>ctype.h</summary>
		
		isalpha
		isdigit
		isalnum
		isascii
		isprint
		toupper
		tolower
</details>

<details>
### <summary>string.h // strings.h</summary>
	
	bzero
	memchr
	memcmp
	memcpy
	memmove
	memset
	strlcat
	strlcpy
	strlen
	strchr
	strnstr
	strncmp
	strrchr
	strup
</details>

<details>
### <summary>stdlib.h</summary>
	
	atoi
	calloc
</details>

## Restrictions applied:
- Cannot use functions from other libraries
- Cannot use ternary operators
- Cannot use global variables
### Exceptions
The function malloc is used for calloc and strdup

	
