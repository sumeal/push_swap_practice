/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:46:30 by muzz              #+#    #+#             */
/*   Updated: 2025/01/07 23:10:51 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_node
{
	long			num;
	long			index;
	long			step;
	struct s_node	*next;
	struct s_node	*prev;
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


#endif