/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 14:42:20 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/01 18:02:40 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_node **a)
{
	t_node	*temp;
	t_node	*head;

	temp = (*a);
	head = (*a)->next;
	(*a) = (*a)->next;
	while ((*a)->next)
		(*a) = (*a)->next;
	temp->next = NULL;
	(*a)->next = temp;
	(*a) = (*a)->next;
	(*a) = head;
	// (*a) = head;
}

void	rotate_b(t_node **b)
{
	t_node	*temp;
	t_node	*head;

	temp = (*b);
	head = (*b)->next;
	(*b) = (*b)->next;
	while ((*b)->next)
		(*b) = (*b)->next;
	temp->next = NULL;
	(*b)->next = temp;
	(*b) = (*b)->next;
	(*b) = head;
	// (*b) = head;
}

void	rr(t_node **a, t_node **b)
{
	rotate_a(a);
	rotate_b(b);
}
