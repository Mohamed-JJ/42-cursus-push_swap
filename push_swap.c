/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:08:41 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/15 17:05:11 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	are_sorted(t_node *a)
{
	t_node	*h;

	h = a;
	while (a)
	{
		h = a;
		while (h)
		{
			if (a->element > h->element)
				return (0);
			h = h->next;
		}
		a = a->next;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	t_node	*h;
	t_node	*ha;

	a = ft_allocatenode(av);
	h = a;
	give_them_index(&a);
	// while (a)
	// {
	// 	printf("%d %d\n", a->element, a->index);
	// 	a = a->next;
	// }
	// printf("\n");
	a = h;
	ft_send_to_b(&a, &b);
	while (a)
	{
		printf("the content %d the index %d\n", a->element, a->index);
		a = a->next;
	}
	return (0);
}
