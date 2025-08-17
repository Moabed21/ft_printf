NAME = 		libft.a
CC =		cc
RM =		rm -f
CFLAGS = 	-Wall -Wextra -Werror
SRC =		ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
		ft_strjoin.c ft_strlen.c ft_strncmp.c ft_strlcat.c ft_striteri.c\
		ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c \
		ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_strmapi.c\
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_strlcpy.c ft_strtrim.c

OBJ = 		$(SRC:.c=.o)
BONUS =		ft_lstnew.c  ft_lstadd_front.c ft_lstsize.c ft_lstlast.c 
BONUS_OBJ =	$(BONUS:.c=.o)

bonus	:	$(OBJ) $(BONUS_OBJ)
		ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		ar rcs $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ) $(BONUS_OBJ)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all 

.PHONY	:	all clean fclean re bonus

