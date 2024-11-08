CC = cc
CFLAGS = -Wall -Wextra -Werror
DEBUG = debug
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
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c

SRC2 :=	ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_putchar_fd.c  \
		ft_putstr_fd.c \
		ft_putendl_fd.c

SRC_bonus :=	ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c 

OBJSC=$(SRC:.c=.o)
OBJSC2=$(SRC2:.c=.o)
OBJSC_bonus=$(SRC_bonus:.c=.o)

all : $(SRC) $(NAME)

$(NAME) : $(OBJSC) $(OBJSC2) $(INC)
	ar -rcs $(NAME) $(OBJSC) $(OBJSC2)

# %.o : %.c $(INC)
# 	$(CC) $(CFLAGS) -c -o $@ $< -I $(INC)

# bonus : $(OBJSC_bonus) $(OBJSC)
# 	ar -rcs $(NAME) $(OBJSC) $(OBJSC2) $(OBJSC_bonus)

clean : 
	rm -rf *.o

fclean : clean
	rm -f $(NAME)
	rm -f main

re : fclean all
