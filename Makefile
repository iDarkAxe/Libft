.PHONY : all clean fclean re bonus
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a


#############################################################################################
#                                                                                           #
#                                         DIRECTORIES                                       #
#                                                                                           #
#############################################################################################
# Source directories
P_SRC = src/
P_MEM = mem/
P_CHAR = char/
P_STR = str/
P_PRINT = print/
P_SORT = sort/
P_SWAP = swap/
P_LST = lst/
P_LST_MANIPULATION = manipulation/

# Object directories
P_OBJ = .obj/

# Header directories
P_INC = inc/

#############################################################################################
#                                                                                           #
#                                           FILES                                           #
#                                                                                           #
#############################################################################################
# Headers
INC = \
	libft.h

# Source files
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
	ft_tolower.c \
	ft_isspace.c 

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

SRC_LST_MANIPULATION = \
	ft_swap_nodes.c 

#############################################################################################
#                                                                                           #
#                                        MANIPULATION                                       #
#                                                                                           #
#############################################################################################
SRCS =	\
	$(addprefix $(P_SRC), $(SRC)) \
	$(addprefix $(P_SRC)$(P_MEM), $(SRC_MEM)) \
	$(addprefix $(P_SRC)$(P_CHAR), $(SRC_CHAR)) \
	$(addprefix $(P_SRC)$(P_STR), $(SRC_STR)) \
	$(addprefix $(P_SRC)$(P_PRINT), $(SRC_PRINT)) \
	$(addprefix $(P_SRC)$(P_SORT), $(SRC_SORT)) \
	$(addprefix $(P_SRC)$(P_SWAP), $(SRC_SWAP)) 

# List of object files (redirect to P_OBJ)
OBJS = $(subst $(P_SRC), $(P_OBJ), $(SRCS:.c=.o))
P_OBJS = $(subst $(P_SRC), $(P_OBJ), $(SRCS))

# List of header files
INCS = $(addprefix $(P_INC)/, $(INC))


#############################################################################################
#                                                                                           #
#                                          RULES                                            #
#                                                                                           #
#############################################################################################
all: $(NAME)

# Create static library 
$(NAME): $(OBJS)
	ar -rcs $(NAME) $^

$(P_OBJ)%.o: $(P_SRC)%.c $(INCS)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I $(P_INC) -c $< -o $@

#############################################################################################
#                                                                                           #
#                           RULES for stupidily shorter library                             #
#                                                                                           #
#############################################################################################
# Just create the library but it contains nothing
lib:
	ar -rcs $(NAME)

char: $(addprefix $(P_OBJ)$(P_CHAR), $(SRC_CHAR:.c=.o))
	ar -rcs $(NAME) $^

mem: $(addprefix $(P_OBJ)$(P_MEM), $(SRC_MEM:.c=.o))
	ar -rcs $(NAME) $^

str: $(addprefix $(P_OBJ)$(P_STR), $(SRC_STR:.c=.o))
	ar -rcs $(NAME) $^

print: $(addprefix $(P_OBJ)$(P_PRINT), $(SRC_PRINT:.c=.o))
	ar -rcs $(NAME) $^

sort: $(addprefix $(P_OBJ)$(P_SORT), $(SRC_SORT:.c=.o))
	ar -rcs $(NAME) $^

swap: $(addprefix $(P_OBJ)$(P_SWAP), $(SRC_SWAP:.c=.o))
	ar -rcs $(NAME) $^

lst: $(addprefix $(P_OBJ)$(P_LST), $(SRC_LST:.c=.o))
	ar -rcs $(NAME) $^

#############################################################################################
#                                                                                           #
#                                      Other RULES                                          #
#                                                                                           #
#############################################################################################
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
	@echo "$(Red)Project: \n\t$(Blue)$(NAME)$(Color_Off)"
	@echo ""
	@echo "$(Red)SRCS: \n\t$(Blue)$(SRCS)$(Color_Off)"
	@echo ""
	@echo "$(Red)OBJS: \n\t$(Blue)$(OBJS)$(Color_Off)"

# Aliases
clear: clean
fclear: fclean
flcean: fclean
flcear: fclean

#############################################################################################
#                                                                                           #
#                                         COSMETIC                                          #
#                                                                                           #
#############################################################################################
# Reset
Color_Off=\033[0m       # Text Reset

# Regular Colors
Black=\033[0;30m
Red=\033[0;31m
Green=\033[0;32m
Yellow=\033[0;33m
Blue=\033[0;34m
Purple=\033[0;35m
Cyan=\033[0;36m
White=\033[0;37m

# Background
On_Black=\033[40m
On_Red=\033[41m
On_Green=\033[42m
On_Yellow=\033[43m
On_Blue=\033[44m
On_Purple=\033[45m
On_Cyan=\033[46m
On_White=\033[47m