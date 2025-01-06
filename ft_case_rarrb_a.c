/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_rarrb_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 10:48:07 by muzz              #+#    #+#             */
/*   Updated: 2025/01/06 10:49:54 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_case_rarrb_a(t_stack *a,t_stack *b, int c)
{
	int i;

	i = 0;
	if (ft_find_index(b,c))
		i = ft_lstsize(b) - ft_find_index(b,c);
	i = ft_find_place_a(a, c) + i;
	return (i);
}