/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 14:42:20 by mjarboua          #+#    #+#             */
/*   Updated: 2022/12/31 16:39:26 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_node **a)
{
	t_node	*temp;
	t_node	*head;

	temp = (*a);
	head = (*a)->next;
	(*a) = (*a)->next;
	while ((*a)->next)
		(*a) = (*a)->next;
	temp->next = NULL;
	(*a)->next = temp;
	(*a) = (*a)->next;
	(*a) = head;
	(*a) = head;
}


void	rotate_b(t_node **b)
{
	t_node	*temp;
	t_node	*head;

	temp = (*b);
	head = (*b)->next;
	(*b) = (*b)->next;
	while ((*b)->next)
		(*b) = (*b)->next;
	temp->next = NULL;
	(*b)->next = temp;
	(*b) = (*b)->next;
	(*b) = head;
	(*b) = head;
}

void	rr(t_node **a, t_node **b)
{
	rotate_a(a);
	rotate_b(b);
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

// 	(void)ac;
// 	(void)av;
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
// 	// push_b_to_a(&l, &s);
// 	// rotate(&l);
// 	rr(&l, &s);
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