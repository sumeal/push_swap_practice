/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 23:10:15 by muzz              #+#    #+#             */
/*   Updated: 2025/01/07 23:10:25 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stack(t_stack *a)
{
	t_node	*current;
	t_node	*temp;

	current = a->top;
	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	free(a);
}