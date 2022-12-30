/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:09:33 by mjarboua          #+#    #+#             */
/*   Updated: 2022/12/30 12:33:37 by mjarboua         ###   ########.fr       */
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

void	swap_stack(t_node **stack_a, t_node **stack_b)
{
	if (!(*stack_a) && !(*stack_b))
		return ;
	swap_first_two(*stack_a);
	swap_first_two(*stack_b);
}
