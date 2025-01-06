/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:17:03 by muzz              #+#    #+#             */
/*   Updated: 2025/01/03 10:26:07 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_pb(t_stack **stack_a, t_stack **stack_b, int i)
{
	t_stack *tmp;

	if(!*stack_a)
		return ;
	tmp = *stack_b;
	*stack_b = *stack_a;
	*stack_a = (*stack_a)->next;
	(*stack_b)->next = tmp;
	if (i == 0)
		write(1, "pb\n", 3);
}