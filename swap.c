/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:09:33 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/17 22:01:24 by mjarboua         ###   ########.fr       */
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
	ft_puts("sb\n");
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
	ft_puts("sa\n");
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	if (!(*stack_a) && !(*stack_b))
		return ;
	sa(stack_a);
	sb(stack_b);
	ft_puts("ss\n");
}

void	rr(t_node **a, t_node **b)
{
	if (!(*a) || !(*b))
		return ;
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}
