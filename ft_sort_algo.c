/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:35:56 by muzz              #+#    #+#             */
/*   Updated: 2025/01/09 16:50:31 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_algo(t_stack *a, t_stack *b)
{
    int max_bits = 0;
    int size = a->size;
    int i, j;
    t_node *current;

    // Find the maximum number of bits needed to represent the largest index
    current = a->top;
    for (int tmp = size - 1; tmp > 0; tmp >>= 1)
        max_bits++;

    // Perform radix sort for each bit
    for (i = 0; i < max_bits; i++)
    {
        for (j = 0; j < size; j++)
        {
            current = a->top;
            if (((current->index >> i) & 1) == 0)
                ft_pb(a, b, 1); // Push to stack b if the current bit is 0
            else
                ft_ra(a, 1);    // Rotate if the current bit is 1
        }
        while (b->size > 0)
            ft_pa(b, a, 1); // Push all elements back to stack a
    }
}
