NAME	= libft.a
SONAME  = libft.so
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c
OBJS	= ${SRCS:.c=.o}

BSRCS	=	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c
BOBJS	= ${BSRCS:.c=.o}

ifeq ($(MAKECMDGOALS), bonus)
	OBJS += $(BOBJS)
endif

all:	$(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}

${SONAME}: ${OBJS}
			${CC} -nostartfiles -shared -o ${SONAME} ${OBJS}

so:		${SONAME}

clean:
	rm -f ${OBJS}
	rm -f ${BOBJS}

fclean: clean
	rm -f ${NAME}
	rm -f ${SONAME}

re: fclean all

bonus: ${NAME}

.PHONY: all, bonus, clean, fclean, re

