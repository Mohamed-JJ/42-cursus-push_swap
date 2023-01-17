/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:50:21 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/17 18:07:37 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	give_them_index(t_node **a)
{
	t_node	*h;
	t_node	*s;
	t_node	*head1;

	h = (*a);
	s = (*a);
	zero_index(a);
	while (h)
	{
		head1 = (*a);
		while (head1)
		{
			if (h->element > head1->element)
				h->index++;
			head1 = head1->next;
		}
		h = h->next;
	}
}

void	zero_index(t_node **a)
{
	t_node	*head;

	head = (*a);
	while ((*a))
	{
		(*a)->index = 0;
		(*a) = (*a)->next;
	}
	(*a) = head;
}
