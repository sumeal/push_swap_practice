/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-moh <abin-moh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:37:13 by abin-moh          #+#    #+#             */
/*   Updated: 2024/12/31 09:57:49 by abin-moh         ###   ########.fr       */
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

void	ft_add_back(t_stack **stack, t_stack *stack_new);
t_stack	*ft_lstlast(t_stack *lst);
int		ft_atoi2(const char *str);
int		ft_checkdup(t_stack *a);
int		ft_checksorted(t_stack *stack_a);
t_stack	*ft_process(int argc, char **argv);
t_stack	*ft_sub_process(char **argv);
t_stack	*ft_stack_new(int content);




//error
void	ft_error(void);
void	ft_free(t_stack **lst);
void	ft_freestr(char **lst);


#endif