/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:08:41 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/10 20:32:31 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct l_data
{
	int	size;
	int	i;
	int	j;
}				t_data;

void	ft_sort_four(t_node **a, t_node **b)
{
	int		size;
	int		i;
	int		j;
	t_node	*h;

	size = ft_lstsize((*a));
	h = (*a);
	while ((*a))
	{
		if ((*a)->index == size - 1)
		{
			pb(a, b);
			break ;
		}
		else
			ra(a);
	}
	if (ft_lstsize(*b) - 1 == 1)
		sb(b);
	ft_sort_three(a);
	pb(b, a);
	ra(a);
	printf("here\n");
}


void	ft_sort_five(t_node **a, t_node **b)
{
	t_data	v;

	v.i = 1;
	v.size = 0;
	while ((*a))
	{
		v.j = ft_lstsize(*a) - 1;
		if ((*a)->index == v.i)
		{
			pb(a, b);
			v.i--;
		}
		if (v.i == -1)
			break ;
		if (ft_get_after_index(a, v.i) > v.j / 2)
		{
			ra(a);
		}
		else
			rra(a);
	}
	ft_sort_three(a);
	pa(a, b);
	pa(a, b);
	give_them_index(a);
}

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
	while (a)
	{
		printf("%d %d\n", a->element, a->index);
		a = a->next;
	}
	a = h;
	ft_sort_five(&a, &b);
	while (a)
	{
		printf("%d %d\n", a->element, a->index);
		a = a->next;
	}
	return (0);
}
