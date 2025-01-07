/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:55:39 by muzz              #+#    #+#             */
/*   Updated: 2025/01/07 16:56:18 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack	*a;

	a = NULL;
	ft_check_valid(argc, argv);
	ft_init_stack(a, argc, argv);
	if (!ft_is_sorted(a))
		ft_sort_stack(a);
	free(a);
	return (0);
}