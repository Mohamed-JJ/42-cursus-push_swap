/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:09:33 by mjarboua          #+#    #+#             */
/*   Updated: 2022/12/27 22:25:13 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_first_two(t_node *v)
{
	int	temp;

	if (!v || !v->next)
		return ;
	temp = v->element;
	v->element = v->next->element;
	v->next->element = temp;
}

void	swap_stack(t_node *stack_a, t_node *stack_b)
{
	swap_first_two(stack_a);
	swap_first_two(stack_b);
}

// int	main(void)
// {
// 	t_node *l;
// 	t_node *l1;

// 	l = malloc(sizeof(t_node));
// 	l1 = malloc(sizeof(t_node));

// 	l->element = 5;
// 	l1->element = 4;
// 	l->next = l1;
// 	l1->next = NULL;
// 	swap_a(l);
// 	printf("the first node's content --> %d\n", l->element);
// 	printf("the last node's content --> %d", l1->element);
// 	return (0);
// }
