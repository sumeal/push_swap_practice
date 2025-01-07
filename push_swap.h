/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:46:30 by muzz              #+#    #+#             */
/*   Updated: 2025/01/07 13:55:27 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struck s_node
{
	long	num;
	long	index;
	long	step;
} t_node;

typedef struct s_stack
{
	t_node	*top;
	long	size;
} t_stack;



#endif