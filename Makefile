SRCS	=	main.c \
			error.c \
			algo1.c \
			algo2.c \
			normalize.c \
			steps2.c \
			steps1.c \
			steps3.c \
			checks.c \
			helpers.c \
			free.c \
			alg_utils.c \
			median.c

SRC_DIR	=	src/
OBJS	=	$(addprefix $(SRC_DIR), $(SRCS:.c=.o))

NAME	=	push_swap

CC		=	gcc -g
RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror -no-pie

all: $(NAME)

$(SRC_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -Ilibft -Ift_printf -c $< -o $@

$(NAME): $(OBJS)
	@make -C libft
	@make -C ft_printf
	$(CC) $(CFLAGS) $(OBJS) -Llibft -lft -Lft_printf -lftprintf -o $(NAME)

libft:
	@make -C libft

ft_printf:
	@make -C ft_printf

clean:
	@make clean -C libft
	@make clean -C ft_printf
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re libft ft_printf
