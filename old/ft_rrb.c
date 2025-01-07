/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:17:54 by muzz              #+#    #+#             */
/*   Updated: 2025/01/07 11:40:00 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrb(t_stack **b, int i)
{
	t_stack	*tmp;
	int		j;

	if (!*b || !((*b)->next))
		return ;
	j = 0;
	tmp = *b;
	while ((*b)->next)
	{
		*b = (*b)->next;
		j++;
	}
	(*b)->next = tmp;
	while (j > 1)
	{
		tmp = tmp->next;
		j--;
	}
	tmp->next = NULL;
	if (i == 0)
		write(1, "rrb\n", 4);
	
}