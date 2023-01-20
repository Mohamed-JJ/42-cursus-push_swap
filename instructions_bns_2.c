/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_bns_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:09:12 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/20 12:41:00 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_node **b)
{
	t_node	*head;
	t_node	*temp;

	if (!(*b) || !(*b)->next)
		return ;
	head = (*b);
	(*b) = (*b)->next;
	head->next = NULL;
	temp = (*b)->next;
	head->next = temp;
	(*b)->next = head;
}

void	sa(t_node **a)
{
	t_node	*head;
	t_node	*temp;

	if (!(*a) || !(*a)->next)
		return ;
	head = (*a);
	(*a) = (*a)->next;
	head->next = NULL;
	temp = (*a)->next;
	head->next = temp;
	(*a)->next = head;
}

void	rra(t_node **a)
{
	t_node	*temp;
	t_node	*head;
	t_node	*ptr;

	head = (*a);
	ptr = (*a);
	temp = ft_last_node((*a));
	ft_before_last(&head);
	head->next = NULL;
	temp->next = ptr;
	(*a) = temp;
}

void	rrb(t_node **b)
{
	t_node	*temp;
	t_node	*head;
	t_node	*ptr;

	head = (*b);
	ptr = (*b);
	temp = ft_last_node((*b));
	ft_before_last(&head);
	head->next = NULL;
	temp->next = ptr;
	(*b) = temp;
}
