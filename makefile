NAME = push_swap

SRC = write_functions.c \
		push_swap.c \
		libft_func.c \
		ft_split.c \
		libft_func2.c \
		lists.c \
		alloce_node.c \
		swap.c \
		push.c \
		reverse_rotate.c \
		indexing.c \
		ft_sorting1.c \
		ft_start_sorting.c \
		checking_func.c \
		parsing.c \

SRC_B = checker_bonus.c \
			write_functions_bonus.c \
			libft_func_bonus.c \
			ft_split_bonus.c \
			libft_func2_bonus.c \
			lists_bonus.c \
			alloce_node_bonus.c \
			instructions_bonus.c \
			instructions_2_bonus.c \
			indexing_bonus.c \
			ft_sorting1_bonus.c \
			ft_start_sorting_bonus.c \
			checking_func_bonus.c \
			parsing_bonus.c \
			get_next_line_bonus.c \
			get_next_line_utils_bonus.c \

OBJ = $(SRC:.c=.o)
OBJ_B = $(SRC_B:.c=.o)

RM = rm -rf

CC = cc

FLAGS = -Wall -Werror -Wextra

all : $(NAME)

%.o : %.c push_swap.h
	@$(CC) $(FLAGS) $< -c -o $@ -g

$(NAME) : $(OBJ) push_swap.h
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME) -g

bonus : $(OBJ_B) push_swap.h
	@$(CC) $(FLAGS) $(OBJ_B) -o checker -g

clean : $(OBJ) $(OBJ_B)
	@$(RM) $(OBJ) $(OBJ_B)

fclean :
	@$(RM) $(NAME) $(OBJ_B) $(OBJ) checker

re : fclean all

.PHONY : re clean fclean all