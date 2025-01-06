/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-moh <abin-moh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 16:40:41 by abin-moh          #+#    #+#             */
/*   Updated: 2024/12/30 16:43:14 by abin-moh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freestr(char **str)
{
	char	*temp;

	if (!str)
		return ;
	while (*str)
	{
		temp = *str;
		str++;
		free(temp);
	}
	*str = NULL;
}
