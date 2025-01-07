/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:55:39 by muzz              #+#    #+#             */
/*   Updated: 2025/01/07 23:59:00 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>  // Include the standard I/O library for printf

static void print_stack(t_stack *a)
{
    t_node *current = a->top;  // Start from the top of the stack

    printf("Stack contents:\n");
    while (current != NULL)
    {
        printf("Value: %ld, Index: %ld\n", current->num, current->index);
        current = current->next;  // Move to the next node
    }
}

static void	ft_create_stack(t_stack **a)
{
	*a = (t_stack *)malloc(sizeof(t_stack));
	if (!*a)
		ft_error();
	(*a)->top = NULL;
	(*a)->size = 0;
}

int main(int argc, char **argv)
{
	t_stack	*a;

	a = NULL;
	ft_check_valid(argc, argv);
	ft_create_stack(&a);
	ft_init_stack(&a, argc, argv);
	// if (!ft_is_sorted(a))
	// 	ft_sort_stack(a);
	print_stack(a);
	ft_free_stack(a);
	return (0);
}