/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 16:39:39 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/01 17:52:33 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **a)
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

void	rb(t_node **b)
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

void	rrr(t_node **a, t_node **b)
{
	reverse_rotate_a(a);
	reverse_rotate_b(b);
}
