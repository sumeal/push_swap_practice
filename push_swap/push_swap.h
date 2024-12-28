/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-moh <abin-moh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 10:56:20 by abin-moh          #+#    #+#             */
/*   Updated: 2024/12/23 11:53:33 by abin-moh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_node
{
	int				data;
	struct s_Node	*next;
	struct s_Node	*prev;
}	t_node;

typedef struct s_stack
{
	s_stack			*top;
	s_stack			*bottom;
}	t_stack;

#endif