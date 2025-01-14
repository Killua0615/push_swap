SRCS	= main.c errors.c algorithms1.c algorithms2.c normalize.c instructions2.c instructions1.c instructions3.c checks.c helpers.c free.c alg_utils.c

SRC_DIR = src/
OBJS	:= $(SRCS:%.c=$(SRC_DIR)%.o)

NAME	= push_swap

CC		= gcc -g
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror -no-pie

all:		${NAME}

$(SRC_DIR)%.o: $(SRC_DIR)%.c
		${CC} ${CFLAGS} -Ilibft -Ift_printf -c $< -o $@

${NAME}:	${OBJS}
		@make -C libft
		@make -C ft_printf
		${CC} ${CFLAGS} ${OBJS} -Llibft -lft -Lft_printf -lftprintf -o ${NAME}

libft:
		make -C libft

ft_printf:
		make -C ft_printf

clean:
			make clean -C libft
			make clean -C ft_printf
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		libft ft_printf

