/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 22:25:24 by mjarboua          #+#    #+#             */
/*   Updated: 2022/12/27 22:31:04 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_node(t_node *node)
{
	free(node->element);
	node->next = NULL;
	free(node);
}

void	push_from_a_b(t_node *stack_a, t_node *stack_b, void (*f)(t_node *))
{
	t_node	*tmp;

	ft_lst_last()
}