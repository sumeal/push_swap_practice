/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:51:04 by muzz              #+#    #+#             */
/*   Updated: 2025/01/09 15:42:19 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node *find_biggest(t_stack *a)
{
    t_node *tmp = a->top;
    t_node *biggest = tmp;

    if (!tmp) // Handle empty stack
        return (NULL);

    while (tmp != a->top)
	{
        if (tmp->num > biggest->num)
            biggest = tmp;
        tmp = tmp->next;
    } 

    return (biggest);
}

void ft_push_extreme(t_stack *a, t_stack *b, int find_largest)
{
    t_node *extreme = a->top;
    t_node *current = a->top->next;

    // Find the smallest or largest element
    while (current != a->top)
    {
        if ((find_largest && current->num > extreme->num) || 
            (!find_largest && current->num < extreme->num))
            extreme = current;
        current = current->next;
    }

    // Bring the extreme element to the top and push to stack b
    while (a->top != extreme)
    {
        if (a->top->prev == extreme)  // If extreme is at the bottom
            ft_rra(a, 1);
        else
            ft_ra(a, 1);
    }
    ft_pb(a, b, 1);
}

void	ft_sort_3(t_stack *a)
{
    if (a->top->num > a->top->next->num && a->top->num > a->top->next->next->num)
        ft_ra(a, 1);  // Rotate if the top element is largest
    else if (a->top->next->num > a->top->next->next->num)
        ft_rra(a, 1); // Reverse rotate if the last element is largest
    if (a->top->num > a->top->next->num)
        ft_sa(a, 1);  // Swap if the first two elements are out of order
}

void ft_sort_5(t_stack *a, t_stack *b)
{
    if (ft_is_sorted(a))
        return;

    // Push the smallest element to stack b
    ft_push_extreme(a, b, 0);  // 0 to find the smallest
    // Push the largest element to stack b
    ft_push_extreme(a, b, 1);  // 1 to find the largest

    // Sort the remaining three elements in stack a
    ft_sort_3(a);

    // Push the largest element back to stack a
    ft_pa(b, a, 1);

    // Push the smallest element back to stack a
    ft_pa(b, a, 1);
}


void ft_sort_stack(t_stack *a, t_stack *b)
{
	if (a->size == 2)
		ft_sa(a, 1);
	else if (a->size == 3)
		ft_sort_3(a);
	else if (a->size == 5)
		ft_sort_5(a, b);
	else
		ft_sort_algo(a, b);
}
