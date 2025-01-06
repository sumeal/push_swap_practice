/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:37:13 by abin-moh          #+#    #+#             */
/*   Updated: 2025/01/06 16:51:54 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include "libft/libft.h"
#include <stdio.h>

typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

//main_process
void	ft_add_back(t_stack **stack, t_stack *stack_new);
t_stack	*ft_lstlast(t_stack *lst);
int		ft_atoi2(const char *str);
int		ft_checkdup(t_stack *a);
int		ft_checksorted(t_stack *stack_a);
t_stack	*ft_process(int argc, char **argv);
t_stack	*ft_sub_process(char **argv);
t_stack	*ft_stack_new(int content);

//case
int		ft_case_rarb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rarb(t_stack *a, t_stack *b, int c);
int		ft_case_rarrb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rarrb(t_stack *a, t_stack *b, int c);
int		ft_case_rrarb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rrarb(t_stack *a, t_stack *b, int c);
int		ft_case_rrarrb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rrarrb(t_stack *a, t_stack *b, int c);

//apply
void	ft_apply_rarb(t_stack **a, t_stack **b, int c);
void	ft_apply_rarrb(t_stack **a, t_stack **b, int c);
void	ft_apply_rrarb(t_stack **a, t_stack **b, int c);
void	ft_apply_rrarrb(t_stack **a, t_stack **b, int c);

//error
void	ft_error(void);
void	ft_free(t_stack **lst);
void	ft_freestr(char **lst);
int		error_duplicate(t_stack_node *a, int n);
int		error_syntax(char *str_n);
void	free_stack(t_stack_node **stack);
void	free_errors(t_stack_node **a)



//process/steps
void	ft_sa(t_stack **stack_a);
void	ft_sb(t_stack **stack_b);
void	ft_ss(t_stack **stack_a, t_stack **stack_b);
void	ft_pa(t_stack **stack_a, t_stack **stack_b);
void	ft_pb(t_stack **stack_a, t_stack **stack_b);
void	ft_ra(t_stack **stack_a);
void	ft_rb(t_stack **stack_b);
void	ft_rr(t_stack **stack_a, t_stack **stack_b);
void	ft_rra(t_stack **stack_a);
void	ft_rrb(t_stack **stack_b);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b);

//identifier
int		ft_max(t_stack *a);
int		ft_min(t_stack *a);
int		ft_find_index(t_stack *a, int c);
int		ft_find_place_a(t_stack *a, int c);
int		ft_find_place_b(t_stack *b, int c);

//sort
void	ft_sort(t_stack **a);
t_stack	*ft_sort_a(t_stack **a, t_stack **b);
t_stack	*ft_sort_b(t_stack **a);
void	ft_sort_b_till_3(t_stack **stack_a, t_stack **stack_b);

//linked_list
int		ft_lstsize(t_stack *lst);
void	ft_add_back(t_stack **stack, t_stack *stack_new);
t_stack	*ft_stack_new(int content);
t_stack	*ft_lstlast(t_stack *lst);

//libft
char	**ft_split(char *str, char c);



/*Belum sort*/
void	init_stack_a(t_stack_node **a, char **argv);


#endif