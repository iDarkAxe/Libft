CC = gcc
CFLAGS = -Wall -Wextra
SRC = .
INC = ./includes
NAME = libft.a

all : $(NAME)

# ft.h : $(INC)/ft.h
# 	cp $(INC)/ft.h .


# main : $(SRC)/main.c
# 	$(CC) $? -o $(SRC)/$@ $(CFLAGS) -Llibft

main : $(SRC)/main.c $(SRC)/ft_isalpha.c $(SRC)/ft_isdigit.c $(SRC)/ft_isalnum.c $(SRC)/ft_isascii.c $(SRC)/ft_isprint.c $(SRC)/ft_strlen.c $(SRC)/ft_toupper.c $(SRC)/ft_tolower.c $(SRC)/ft_strchr.c $(SRC)/ft_strrchr.c $(SRC)/ft_strncmp.c $(SRC)/ft_memset.c $(SRC)/ft_bzero.c $(SRC)/ft_strnstr.c $(SRC)/ft_atoi.c
	$(CC) $^ -o $(SRC)/$@ $(CFLAGS) -lbsd -Llibft 

ft_isalpha.o : $(SRC)/ft_isalpha.c
	$(CC) -c $? -o $(SRC)/$@ $(CFLAGS)

$(NAME) : $(SRC)/ft_isalpha.o 
	ar -rcs $(NAME) $?

clean : 
	rm -rf $(SRC)/*.o

fclean : clean
	rm -f $(NAME)
	rm -f main

re : fclean all
