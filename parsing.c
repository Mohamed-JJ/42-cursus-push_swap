/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:15:54 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/17 17:46:48 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_double(t_node **a)
{
	int		holder;
	int		count;
	t_node	*h;
	t_node	*h1;

	h1 = (*a);
	while ((*a))
	{
		holder = (*a)->element;
		count = 0;
		h = (*a);
		while (h)
		{
			if (holder == h->element)
				count++;
			if (h->element == holder && count >= 2)
				p_error(1);
			h = h->next;
		}
		(*a) = (*a)->next;
	}
	(*a) = h1;
	return (0);
}
