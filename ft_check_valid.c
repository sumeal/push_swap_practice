/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muzz <muzz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:09:09 by muzz              #+#    #+#             */
/*   Updated: 2025/01/10 11:45:22 by muzz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_valid2(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j])
				|| argv[i][j] == '-' || argv[i][j] == '+')
				j++;
			else
				ft_error();
		}
		i++;
	}
}

void	ft_check_valid(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ')
				i++;
			if (ft_isdigit(argv[1][i])
				|| argv[1][i] == '-' || argv[1][i] == '+')
				i++;
			else
				ft_error();
		}
	}
	else
		ft_check_valid2(argc, argv);
}
