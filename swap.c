/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:09:33 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/08 13:23:07 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node *a)
{
	t_node	*head;
	int	temp;

	if (!a || !a->next)
		return ;
	temp = a->element;
	a->element = a->next->element;
	a->next->element = temp;
	ft_puts("sa\n");
}

void	sb(t_node *b)
{
	int	temp;

	if (!b || !b->next)
		return ;
	temp = b->element;
	b->element = b->next->element;
	b->next->element = temp;
	ft_puts("sb\n");
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	if (!(*stack_a) && !(*stack_b))
		return ;
	sa(*stack_a);
	sb(*stack_b);
	ft_puts("ss\n");
}
