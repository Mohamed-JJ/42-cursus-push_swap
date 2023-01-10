/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:09:33 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/10 16:15:26 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// void	sa(t_node **a)
// {
// 	t_node	*h;
// 	t_node	*t;

// 	h = (*a);
// 	t = (*a)->next;
// 	h->next = NULL;
// 	(*a) = (*a)->next;
// 	(*a)->next = h;
// 	h->next = t;
// 	ft_puts("sa\n");
// }

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

// void	sb(t_node **b)
// {
// 	int	temp;

// 	if (!(*b) || !(*b)->next)
// 		return ;
// 	temp = (*b)->element;
// 	(*b)->element = (*b)->next->element;
// 	(*b)->next->element = temp;
// 	ft_puts("sb\n");
// }

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
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}
