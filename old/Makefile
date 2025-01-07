NAME = push_swap
CC = cc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/

SRC = ft_add_back.c \
		ft_apply_rarb.c \
		ft_apply_rrarb.c \
		ft_apply_rrarb.c \
		ft_apply_rrarrb.c \
		ft_atoi2.c \
		ft_case_rarb_a.c \
		ft_case_rarb.c \
		ft_case_rarrb_a.c \
		ft_case_rarrb.c \
		ft_case_rrarb_a.c \
		ft_case_rrarb.c \
		ft_case_rrarrb_a.c \
		ft_case_rrarrb.c \
		ft_checkdup.c \
		ft_checksorted.c \
		ft_error.c \
		ft_find_index.c \
		ft_find_place_a.c \
		ft_find_place_b.c \
		ft_free.c \
		ft_freestr.c \
		ft_init_stack_a.c \
		ft_lstlast.c \
		ft_lstsize.c \
		ft_max.c \
		ft_min.c \
		ft_pa.c \
		ft_pb.c \
		ft_process.c \
		ft_ra.c \
		ft_rb.c \
		ft_rotate_type_ab.c \
		ft_rr.c \
		ft_rra.c \
		ft_rrb.c \
		ft_rrr.c \
		ft_sa.c \
		ft_sb.c \
		ft_sort_a.c \
		ft_sort_b_till_3.c \
		ft_sort_b.c \
		ft_sort.c \
		ft_stack_new.c \
		ft_sub_process.c \
		handle_errors.c \
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