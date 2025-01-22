# 42-cursus-static-lib

## Introduction
Static library composed out of functions from the Standard C Library with my own code implementation.

## Functions
### ctype.h
<details>
<summary>See functions</summary>

#### isalnum
<details>
<summary>See description</summary>
Checks for an alphanumeric character, it is equivalent to (isalpha(c) || isdigit(c)).
</details>
		
#### isalpha
<details>
<summary>See description</summary>
Checks  for  an  alphabetic  character; either upper or lower case
</details>

#### isdigit
<details>
<summary>See description</summary>
Checks for a digit (0 through 9).
</details>

#### isascii
<details>
<summary>See description</summary>
Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
</details>

#### isprint
<details>
<summary>See description</summary>
Checks for any printable character including space.
</details>

#### toupper
<details>
<summary>See description</summary>
</details>

#### tolower
<details>
<summary>See description</summary>
</details>

</details>

### string.h // strings.h
<details>
<summary>See fuctions</summary>
	
#### bzero
#### memchr
#### memcmp
#### memcpy
#### memmove
#### memset
#### strlcat
#### strlcpy
#### strlen
#### strchr
#### strnstr
#### strncmp
#### strrchr
#### strup
</details>

### stdlib.h
<details>
<summary>See functions</summary>
	
#### atoi
#### calloc
</details>

## Restrictions applied:
- Cannot use functions from other libraries
- Cannot use ternary operators
- Cannot use global variables
### Exceptions
The function malloc is used for calloc and strdup

	
