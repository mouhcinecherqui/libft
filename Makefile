NAME= 	libft.a
SRC=  ft_atoi.c ft_isalnum.c ft_bzero.c ft_calloc.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memchr.c ft_memcmp.c ft_memccpy.c ft_memcpy.c ft_memmove.c ft_putchar_fd.c \
		ft_memset.c ft_itoa.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strchr.c ft_strdup.c \
		ft_strlcat.c ft_strjoin.c ft_strlen.c ft_strlcpy.c ft_split.c ft_strncmp.c ft_strmapi.c ft_strnstr.c \
		ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strtrim.c
OBJ= $(SRC:.c=.o)
FLG= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(FLG) -c $(SRC)
	ar r $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
