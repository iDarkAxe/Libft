CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCDIR = .
OBJDIR = .
INCDIR = .
NAME = libft.a

vpath %.c $(SRCDIR)

# En-tête
INC = libft.h

# Fichiers sources
SRC = ft_isalpha.c \
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

SRC2 = ft_substr.c \
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

SRC_bonus = ft_lstnew

# Liste des fichiers objets (redirigés vers OBJDIR)
OBJS = $(addprefix $(OBJDIR)/, $(SRC:.c=.o) $(SRC2:.c=.o))
OBJSBONUS = $(addprefix $(OBJDIR)/, $(SRCBONUS:.c=.o))
INCS = $(addprefix $(INCDIR)/, $(INC))

# Règles
all: $(NAME)

# Créer la bibliothèque avec les objets
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

# bonus : $(OBJS) $(OBJSBONUS)
# 	ar -rcs $(NAME) $(OBJS) $(OBJSBONUS)

# Compilation des fichiers objets dans OBJDIR
$(OBJDIR)/%.o: %.c $(INCS)
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c -o $@ $< -I $(INCDIR)

#Règles de nettoyage
clean:
	rm -rf $(OBJDIR)/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus