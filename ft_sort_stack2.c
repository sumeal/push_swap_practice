/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:55:36 by muzz              #+#    #+#             */
/*   Updated: 2025/01/10 11:56:19 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_4(t_stack *a, t_stack *b)
{
	if (ft_is_sorted(a))
		return ;
	ft_push_extreme(a, b, 0);
	ft_sort_3(a);
	ft_pa(b, a, 1);
}