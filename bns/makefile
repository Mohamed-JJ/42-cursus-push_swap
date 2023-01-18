NAME = push_swap

SRC = write_functions.c \
		push_swap.c \
		libft_func.c \
		ft_split.c \
		libft_func2.c \
		split_convert.c \
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
		get_next_line.c \
		get_next_line_utils.c \

SRC_B = checker_bonus.c \
			write_functions.c \
			libft_func.c \
			ft_split.c \
			libft_func2.c \
			split_convert.c \
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
			get_next_line.c \
			get_next_line_utils.c \

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
	@$(RM) $(OBJ) $(OBJB)

fclean :
	@$(RM) $(NAME) $(OBJ_B) $(OBJ) checker

re : fclean all

.PHONY : re clean fclean all