/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 22:25:24 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/15 13:58:38 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_before_last(t_node **node)
{
	if (!(*node))
		return ;
	while ((*node)->next->next)
		(*node) = (*node)->next;
}

void	pb(t_node **a, t_node **b)
{
	t_node	*ptr_a;

	ptr_a = (*a);
	(*a) = (*a)->next;
	ptr_a->next = NULL;
	ft_lstadd_front(b, ptr_a);
	write(1, "pb\n", 3);
}

void	pa(t_node **a, t_node **b)
{
	t_node	*ptr_b;

	if (!(*b))
		return ;
	ptr_b = (*b);
	(*b) = (*b)->next;
	ptr_b->next = NULL;
	ft_lstadd_front(a, ptr_b);
	write(1, "pa\n", 3);
}

void	ra(t_node **a)
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
	write(1, "ra\n", 3);
}

void	rb(t_node **b)
{
	t_node	*temp;
	t_node	*head;

	if ((*b)->next == NULL)
		return ;
	temp = (*b);
	head = (*b)->next;
	(*b) = (*b)->next;
	while ((*b)->next)
		(*b) = (*b)->next;
	temp->next = NULL;
	(*b)->next = temp;
	(*b) = (*b)->next;
	(*b) = head;
	write(1, "rb\n", 3);
}


