CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = .
INC_dir = ./includes
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
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_atoi.c

OBJSC=$(SRC:.c=.o)

all : $(SRC) $(NAME)

# ft.h : $(INC)/ft.h
# 	cp $(INC)/ft.h .


# main : $(SRC)/main.c
# 	$(CC) $? -o $(SRC)/$@ $(CFLAGS) -Llibft

# main : $(SRC)/main.c $(SRC)/ft_isalpha.c $(SRC)/ft_isdigit.c $(SRC)/ft_isalnum.c $(SRC)/ft_isascii.c $(SRC)/ft_isprint.c $(SRC)/ft_strlen.c $(SRC)/ft_toupper.c $(SRC)/ft_tolower.c $(SRC)/ft_strchr.c $(SRC)/ft_strrchr.c $(SRC)/ft_strncmp.c $(SRC)/ft_memset.c $(SRC)/ft_bzero.c $(SRC)/ft_strnstr.c $(SRC)/ft_atoi.c
# 	$(CC) -g $^ -o  $(SRC)/$@ $(CFLAGS) -lbsd -Llibft 


$(NAME) : $(OBJSC)
	ar -rcs $(NAME) $(OBJSC)

clean : 
	rm -rf *.o

fclean : clean
	rm -f $(NAME)
	rm -f main

re : fclean all
