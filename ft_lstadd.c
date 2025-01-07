/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:10:48 by muzz              #+#    #+#             */
/*   Updated: 2025/01/08 00:10:15 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd(t_stack **a, t_node *new)
{
	if (!(*a)->top)
	{
		
		(*a)->top = new;
		(*a)->size = 1;
	}
	else
	{
		new->next = (*a)->top;
		(*a)->top->prev = new;
		(*a)->top = new;
		(*a)->size++;
	}
}
