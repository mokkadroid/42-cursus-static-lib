# 42-cursus-static-lib

## Introduction
Static library composed out of functions from the Standard C Library with my own code implementation.

## Functions
### ctype.h
<details>
<summary>See functions</summary>

#### ft_isalnum
<details open>
<summary><strong><em>Description</em></strong></summary>
	Checks for an alphanumeric character, equivalent to (isalpha(c) || isdigit(c)).
</details>
		
#### ft_isalpha
<details open>
<summary><strong><em>Description</em></strong></summary>
        Checks  for  an  alphabetic  character, either upper or lower case
</details>

#### isdigit
<details open>
<summary><strong><em>Description</em></strong></summary>
        Checks for a digit (0 through 9).
</details>

#### ft_isascii
<details open>
<summary><strong><em>Description</em></strong></summary>
        Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
</details>

#### ft_isprint
<details open>
<summary><strong><em>Description</em></strong></summary>
        Checks for any printable character including space.
</details>

#### ft_toupper
<details open>
<summary><strong><em>Description</em></strong></summary>
</details>

#### ft_tolower
<details open>
<summary><strong><em>Description</em></strong></summary>
</details>

</details>

### string.h // strings.h
<details>
<summary>See fuctions</summary>
	
#### ft_bzero
#### ft_memchr
#### ft_memcmp
#### ft_memcpy
#### ft_memmove
#### ft_memset
#### ft_strlcat
#### ft_strlcpy
#### ft_strlen
#### ft_strchr
#### ft_strnstr
#### ft_strncmp
#### ft_strrchr
#### ft_strup
</details>

### stdlib.h
<details>
<summary>See functions</summary>
	
#### ft_atoi
#### ft_calloc
</details>

## Restrictions applied:
- Cannot use functions from other libraries
- Cannot use ternary operators
- Cannot use global variables
### Exceptions
The function malloc is used for calloc and strdup

	
