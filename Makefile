SRC = ft_printf.c ft_printf_text.c ft_printf_hex.c ft_utils_0.c\
	ft_printf_conversor.c ft_printf_nbr.c ft_utils_1.c


OBJS = ${SRC:.c=.o}

NAME = libftprintf.a

RM = rm -f

LIB = ar rcs

CC = cc

CFLAGS = -Wall -Wextra -Werror

%.o: %.c Makefile ft_printf.h
	 ${CC} ${CFLAGS} -c $< -o $@


${NAME}: ${OBJS}
				${LIB} ${NAME} ${OBJS}

all: ${NAME}

clean: 
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
