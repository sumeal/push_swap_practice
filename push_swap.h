/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:46:30 by muzz              #+#    #+#             */
/*   Updated: 2025/01/09 16:35:40 by muzz             ###   ########.fr       */
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
	struct s_node	*b_node;
} t_node;

typedef struct s_stack
{
	t_node	*top;
	long	size;
} t_stack;

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

//operations
void    ft_pa(t_stack *a, t_stack *b, int i);
void    ft_pb(t_stack *a, t_stack *b, int i);
void    ft_sa(t_stack *a, int i);
void    ft_sb(t_stack *b, int i);
void    ft_ss(t_stack *a, t_stack *b, int i);
void    ft_ra(t_stack *a, int i);
void    ft_rb(t_stack *b, int i);
void    ft_rr(t_stack *a, t_stack *b, int i);
void    ft_rra(t_stack *a, int i);
void    ft_rrb(t_stack *b, int i);
void    ft_rrr(t_stack *a, t_stack *b, int i);



#endif