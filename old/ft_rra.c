/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:59:08 by muzz              #+#    #+#             */
/*   Updated: 2025/01/07 11:39:28 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack **a, int i)
{
	t_stack	*tmp;
	int		j;

	if (!*a || !((*a)->next))
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
	if (i == 0)
		write(1, "rra\n", 4);
}