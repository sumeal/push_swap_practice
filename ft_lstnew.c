/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:36:06 by muzz              #+#    #+#             */
/*   Updated: 2025/01/07 22:45:05 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_lstnew(long num, int index)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		ft_error();
	new->num = num;
	new->index = index;
	new->step = 0;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
