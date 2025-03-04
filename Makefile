CC		=	cc -g
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	libft.a
SRC_D	=	src/
OBJ_D	=	obj/
INC_D	=	.
SRC_N	=	ft_atoi.c ft_bzero.c ft_calloc.c \
				ft_isalnum.c ft_isalpha.c ft_isascii.c \
				ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
				ft_memcpy.c	ft_memmove.c ft_memset.c \
				ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
				ft_putstr_fd.c ft_split.c ft_strchr.c \
				ft_strdup.c ft_strlcat.c ft_striteri.c ft_strjoin.c \
				ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strmapi.c \
				ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
				ft_tolower.c ft_toupper.c
SRC		=	$(addprefix $(SRC_D), $(SRC_N)) #relative path of the src files
OBJ_N	=	$(SRC_N:.c=.o) #the of the objects are the of the src files
OBJ		=	$(addprefix $(OBJ_D), $(OBJ_N)) #relative path of objects

#for testing DELETE B4 SUBMIT
EXE = trial

all : $(NAME)

$(OBJ_D):
	@mkdir $(OBJ_D)

$(NAME) : $(OBJ_D) $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

$(OBJ_D)%.o: $(SRC_D)%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_D)


clean :
	@rm -f $(OBJ)
	@rm -r $(OBJ_D)

fclean: clean 
	@rm -f core $(NAME)

re: fclean all

.PHONY : clean fclean re all
