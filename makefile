NAME = push_swap

SRC = write_functions.c \
		push_swap.c \
		parsing.c \
		libft_func.c \
		libft_func2.c \

OBJ = $(SRC:.c=.o)

RM = rm -rf

CC = cc

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

%.o : %.c push_swap.h
	@$(CC) $(FLAGS) $< -c -o $@

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean : $(OBJ)
	@$(RM) $(OBJ)

fclean :
	@$(RM) $(NAME) $(OBJ)

re : fclean all

.PHONY : re clean fclean all