/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_instruction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:48:55 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/13 15:04:33 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	chunk_size(t_node **a)
{
	int	chunk;
	int	size;

	size = ft_lstsize(*a) - 1;
	if (size < 200)
	{
		chunk = 20;
		printf("here chunk size %d \n", size);
	}
	else if (ft_lstsize(*a) >= 200)
		chunk = 40;
	return (chunk);
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
