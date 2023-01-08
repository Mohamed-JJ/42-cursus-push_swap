/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_instruction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:48:55 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/06 20:49:55 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_before_index(t_node **a, int index)
{
	int	i;

	i = 0;
	while ((*a))
	{
		i++;
		if ((*a)->index == index)
			break ;
		(*a) = (*a)->next;
	}
	return (i);
}

int	ft_get_after_index(t_node **a, int index)
{
	int		i;
	t_node	*head;

	i = 0;
	head = (*a);
	while ((*a))
	{
		if ((*a)->index == index)
		{
			while ((*a))
			{
				(*a) = (*a)->next;
				i++;
			}
		}
		if ((*a))
			(*a) = (*a)->next;
	}
	(*a) = head;
	return (i);
}
