/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:51:17 by muzz              #+#    #+#             */
/*   Updated: 2025/01/07 17:00:56 by muzz             ###   ########.fr       */
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

void	ft_stack_init(t_stack **a, int argc, char **argv)
{
    char	**str;
    int		i;

    i = 0;
	ft_create_stack(a);
	if (argc == 2)
    {
        str = ft_split(argv[1], ' ');
        if (!str)
            ft_error();
        while (str[i])
        {
            ft_lstadd(a, ft_lstnew(ft_atoi(str[i])), i);
            i++;
        }
        ft_free_split(str); // Free the split array
    }
    else
    {
        while (++i < argc)
        	ft_lstadd(a, ft_lstnew(ft_atoi(argv[i])), (i - 1));
    }
}
