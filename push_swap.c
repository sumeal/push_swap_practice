/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:55:39 by muzz              #+#    #+#             */
/*   Updated: 2025/01/10 11:40:23 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_create_stack(t_stack **a)
{
	*a = (t_stack *)malloc(sizeof(t_stack));
	if (!*a)
		ft_error();
	(*a)->top = NULL;
	(*a)->size = 0;
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	ft_check_valid(argc, argv);
	ft_create_stack(&a);
	ft_init_stack(&a, argc, argv);
	if (!ft_is_sorted(a))
	{
		ft_create_stack(&b);
		ft_sort_stack(a, b);
	}
	ft_free_stack(a);
	return (0);
}
