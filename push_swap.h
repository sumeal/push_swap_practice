/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:46:30 by muzz              #+#    #+#             */
/*   Updated: 2025/01/10 11:46:15 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>

typedef struct s_node
{
	long			num;
	long			index;
	long			step;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	long	size;
}	t_stack;

void	ft_check_valid(int argc, char **argv);
void	ft_error(void);
void	ft_lstadd(t_stack **a, t_node *new);
t_node	*ft_lstnew(long num, int index);
void	ft_init_stack(t_stack **a, int argc, char **argv);
void	ft_free_stack(t_stack *a);
int		ft_is_sorted(t_stack *a);
t_node	*ft_lstlast(t_node *lst);
void	ft_sort_stack(t_stack *a, t_stack *b);
void	ft_sort_algo(t_stack *a, t_stack *b);
void	ft_sort_3(t_stack *a);
void	assign_indices(t_stack *a);
void	copy_stack_to_array(t_stack *a, long *arr);
long	find_min_value(long *arr, int size);
void	adjust_array_values(long *arr, int size, long offset);
void	bubble_sort(long *arr, int size);
long	*prepare_sorted_array(t_stack *a, long *offset);
void	assign_stack_indices(t_stack *a, long *arr, long offset);
void	assign_indices(t_stack *a);

//operations
void	ft_pa(t_stack *a, t_stack *b, int i);
void	ft_pb(t_stack *a, t_stack *b, int i);
void	ft_sa(t_stack *a, int i);
void	ft_sb(t_stack *b, int i);
void	ft_ss(t_stack *a, t_stack *b, int i);
void	ft_ra(t_stack *a, int i);
void	ft_rb(t_stack *b, int i);
void	ft_rr(t_stack *a, t_stack *b, int i);
void	ft_rra(t_stack *a, int i);
void	ft_rrb(t_stack *b, int i);
void	ft_rrr(t_stack *a, t_stack *b, int i);

#endif