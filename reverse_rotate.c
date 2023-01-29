/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 16:39:39 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/27 16:17:56 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node **a)
{
	t_node	*temp;
	t_node	*head;
	t_node	*ptr;

	if (!(*a))
		return ;
	head = (*a);
	ptr = (*a);
	temp = ft_last_node((*a));
	ft_before_last(&head);
	head->next = NULL;
	temp->next = ptr;
	(*a) = temp;
	ft_puts("rra\n");
}

void	rrb(t_node **b)
{
	t_node	*temp;
	t_node	*head;
	t_node	*ptr;

	if (!(*b))
		return ;
	head = (*b);
	ptr = (*b);
	temp = ft_last_node((*b));
	ft_before_last(&head);
	head->next = NULL;
	temp->next = ptr;
	(*b) = temp;
	ft_puts("rrb\n");
}

void	rrr(t_node **a, t_node **b)
{
	if (!(*a) || !(*b))
		return ;
	rra(a);
	rrb(b);
	ft_puts("rrr\n");
}
