NAME = push_swap
CC = cc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/

SRC = ft_add_back.c \
		ft_atoi2.c \
		ft_checkdup.c \
		ft_checksorted.c \
		ft_error.c \
		ft_free.c \
		ft_freestr.c \
		ft_lstlast.c \
		ft_process.c \
		ft_stack_new.c \
		ft_sub_process.c \
		push_swap.c \

OBJ = ${SRC:.c=.o}

INCLUDE = -L ./libft -lft

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	make -C ${LIBFTDIR}
	${CC} ${FLAGS} ${OBJ} -o ${NAME} ${INCLUDE}

all: ${NAME}

clean:
	${RM} ${OBJ}
	@cd ${LIBFTDIR} && $(MAKE) clean

fclean: clean
	${RM} ${NAME}
	@cd ${LIBFTDIR} && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean all