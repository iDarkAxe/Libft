CC = gcc
CFLAGS = -Wall -Wextra -Werror
DEBUG = -g
SRC = .
INC_dir = .
NAME = libft.a

INC := libft.h

SRC :=	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_atoi.c

OBJSC=$(SRC:.c=.o)

all : $(SRC) $(NAME)

$(NAME) : $(OBJSC)
	ar -rcs $(NAME) $(OBJSC)

clean : 
	rm -rf *.o

fclean : clean
	rm -f $(NAME)
	rm -f main

re : fclean all
