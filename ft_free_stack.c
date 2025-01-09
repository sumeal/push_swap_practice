/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 23:10:15 by muzz              #+#    #+#             */
/*   Updated: 2025/01/09 09:52:36 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stack(t_stack *a)
{
	long		i;
	t_node	*temp;
	t_node	*current;
	
	if (!a || a->size == 0)
	{
		free(a);
		return ;
	}
	i = 1;
	current = a->top;
	while (i < a->size)
	{
		temp = current;
		current = current->next;
		free(temp);
		i++;
	}
	free(a);
}