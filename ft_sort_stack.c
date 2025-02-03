/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:51:04 by muzz              #+#    #+#             */
/*   Updated: 2025/01/10 12:27:33 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_biggest(t_stack *a)
{
	t_node	*tmp;
	t_node	*biggest;

	tmp = a->top;
	biggest = a->top;
	if (!tmp)
		return (NULL);
	while (tmp != a->top)
	{
		if (tmp->num > biggest->num)
			biggest = tmp;
		tmp = tmp->next;
	}
	return (biggest);
}

void	ft_push_extreme(t_stack *a, t_stack *b, int find_largest)
{
	t_node	*extreme;
	t_node	*current;

	current = a->top->next;
	extreme = a->top;
	while (current != a->top)
	{
		if ((find_largest && current->num > extreme->num)
			|| (!find_largest && current->num < extreme->num))
			extreme = current;
		current = current->next;
	}
	while (a->top != extreme)
	{
		if (a->top->prev == extreme)
			ft_rra(a, 1);
		else
			ft_ra(a, 1);
	}
	ft_pb(a, b, 1);
}

void	ft_sort_3(t_stack *a)
{
	if (a->top->num > a->top->next->num
		&& a->top->num > a->top->next->next->num)
		ft_ra(a, 1);
	else if (a->top->next->num > a->top->next->next->num)
		ft_rra(a, 1);
	if (a->top->num > a->top->next->num)
		ft_sa(a, 1);
}

void	ft_sort_5(t_stack *a, t_stack *b)
{
	if (ft_is_sorted(a))
		return ;
	ft_push_extreme(a, b, 0);
	ft_push_extreme(a, b, 0);
	ft_sort_3(a);
	ft_pa(b, a, 1);
	ft_pa(b, a, 1);
}

void	ft_sort_stack(t_stack *a, t_stack *b)
{
	if (a->size == 2)
		ft_sa(a, 1);
	else if (a->size == 3)
		ft_sort_3(a);
	else if (a->size == 4)
		ft_sort_4(a, b);
	else if (a->size == 5)
		ft_sort_5(a, b);
	else
		ft_sort_algo(a, b);
}
