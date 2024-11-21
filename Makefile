.PHONY : all clean fclean re bonus
CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

# Directories
P_SRC = src/
P_MEM = mem/
P_CHAR = char/
P_STR = str/
P_PRINT = print/
P_SORT = sort/
P_SWAP = swap/
P_LST = lst/

P_OBJ = .obj/
P_INC = ./

# En-tête
INC = \
	libft.h

# Fichiers sources
SRC = \
	ft_atoi.c \
	ft_atoi_base.c \
	ft_itoa.c 
	
SRC_MEM = \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_calloc.c 

SRC_CHAR = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c 

SRC_STR = \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strdup.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c 

SRC_SORT = \
	ft_rev_int.c

SRC_SWAP = \
	ft_swap.c \
	ft_swap_no_temp.c

SRC_PRINT = \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putnbr_base.c \
	ft_convert_base.c \
	ft_putpointer_fd.c
	
SRC_LST = \
	ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstmap_bonus.c

SRCS =	\
	$(addprefix $(P_SRC), $(SRC)) \
	$(addprefix $(P_SRC)$(P_MEM), $(SRC_MEM)) \
	$(addprefix $(P_SRC)$(P_CHAR), $(SRC_CHAR)) \
	$(addprefix $(P_SRC)$(P_STR), $(SRC_STR)) \
	$(addprefix $(P_SRC)$(P_PRINT), $(SRC_PRINT)) \
	$(addprefix $(P_SRC)$(P_SORT), $(SRC_SORT)) \
	$(addprefix $(P_SRC)$(P_SWAP), $(SRC_SWAP)) 

P_SRCS = \
	$(P_SRC) \
	$(P_SRC)$(P_MEM) \
	$(P_SRC)$(P_CHAR) \
	$(P_SRC)$(P_STR) \
	$(P_SRC)$(P_PRINT) \
	$(P_SRC)$(P_SORT) \
	$(P_SRC)$(P_SWAP) 

# Liste des fichiers objets (redirigés vers P_OBJ)
OBJS = $(subst $(P_SRC), $(P_OBJ), $(SRCS:.c=.o))
P_OBJS = $(subst $(P_SRC), $(P_OBJ), $(SRCS))

# Liste des fichiers header avec leurs chemins relatifs
INCS = $(addprefix $(P_INC)/, $(INC))

# Règles
all: $(NAME)

# Créer la bibliothèque avec les objets
$(NAME): $(OBJS)
	ar -rcs $(NAME) $^

$(P_OBJ)%.o: $(P_SRC)%.c $(INCS) | $(P_OBJ)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I $(P_INC) -c $< -o $@

$(P_OBJ): 
	@mkdir -p $(P_OBJS)

# Rules for clean up
clean:
	rm -rfd $(P_OBJ)

fclean:
	@$(MAKE) --no-print-directory clean
	rm -f $(NAME)

re:
	@$(MAKE) --no-print-directory fclean
	@$(MAKE) --no-print-directory all

# Debugging
debug:
	@echo "SRCS: $(SRCS)"
	@echo "OBJS: $(OBJS)"
