/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:44:26 by muzz              #+#    #+#             */
/*   Updated: 2025/01/07 11:40:49 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rrr_cont(t_stack **b, int i)
{
	t_stack	*tmp;
	int		j;

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
		write(1, "rrr\n", 4);
}

void	ft_rrr(t_stack **a, t_stack **b, int i)
{
	t_stack	*tmp;
	int		j;

	if (!*a || !((*a)->next) || !*b || !((*b)->next))
		return ;
	j = 0;
	tmp = *a;
	while ((*a)->next)
	{
		*a = (*a)->next;
		j++;
	}
	(*a)->next = tmp;
	while (j > 1)
	{
		tmp = tmp->next;
		j--;
	}
	tmp->next = NULL;
	ft_rrr_cont(b, i);
}