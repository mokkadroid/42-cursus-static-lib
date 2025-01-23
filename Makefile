CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c
OFILES = $(SRC:.c =.o)
#for testing DELETE B4 SUBMIT
EXE = trial

all : $(NAME) $(EXE)

trial : trial.c libft.a
	echo "--- Generating trial ---"
	gcc $^ -o $@

$(NAME) : $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean :
	rm -f $(OFILES)

fclean:
	clean rm -f core $(NAME)

re:
	fclean all

.PHONY : clean fclean re all