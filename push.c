/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 22:25:24 by mjarboua          #+#    #+#             */
/*   Updated: 2022/12/30 23:14:37 by mjarboua         ###   ########.fr       */
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

void	push_a_to_b(t_node **a, t_node **b)
{
	t_node	*ptr_a;
	t_node	*ptr_a1;
	t_node	*head;

	if (!(*a))
		return ;
	head = (*a);
	ptr_a = ft_last_node((*a));
	ft_before_last(&head);
	ft_lstadd_back(b, ptr_a);
	head->next = NULL;
	a = &head;
}

void	push_b_to_a(t_node **a, t_node **b)
{
	t_node	*ptr_a;
	t_node	*ptr_a1;
	t_node	*head;

	if (!(*a))
		return ;
	head = (*b);
	ptr_a = ft_last_node((*b));
	ft_before_last(&head);
	ft_lstadd_back(a, ptr_a);
	head->next = NULL;
	b = &head;
}

// int	main(int ac, char **av)
// {
// 	t_node	*l;
// 	t_node	*l1;
// 	t_node	*l2;
// 	t_node	*l3;
// 	t_node	*s;
// 	t_node	*s1;
// 	t_node	*s2;
// 	t_node	*s3;

// 	l = malloc(sizeof(t_node));
// 	l1 = malloc(sizeof(t_node));
// 	s = malloc(sizeof(t_node));
// 	s1 = malloc(sizeof(t_node));
// 	l2 = malloc(sizeof(t_node));
// 	l3 = malloc(sizeof(t_node));
// 	s2 = malloc(sizeof(t_node));
// 	s3 = malloc(sizeof(t_node));
// 	l->element = 1;
// 	l1->element = 2;
// 	l2->element = 3;
// 	l3->element = 4;
// 	l->next = l1;
// 	l1->next = l2;
// 	l2->next = l3;
// 	l3->next = NULL;
// 	s->element = 5;
// 	s1->element = 6;
// 	s2->element = 7;
// 	s3->element = 8;
// 	s->next = s1;
// 	s1->next = s2;
// 	s2->next = s3;
// 	s3->next = NULL;
// 	push_b_to_a(&l, &s);
// 	while (l)
// 	{
// 		printf("the first l node's content --> %d\n", l->element);
// 		l = l->next;
// 	}
// 	printf("\n");
// 	while (s)
// 	{
// 		printf("the first s node's content --> %d\n", s->element);
// 		s = s->next;
// 	}
// 	free(s);
// 	free(l);
// 	return (0);
// }
