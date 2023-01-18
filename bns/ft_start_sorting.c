/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_sorting.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:43:46 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/18 13:32:23 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct l_data
{
	int	size;
	int	j;
	int	i;
	int	half;
}				t_data;

void	ft_send_to_b(t_node **a, t_node **b)
{
	t_data	v;

	v.i = 0;
	v.size = ft_lstsize(*a) - 1;
	if (v.size + 1 < 101)
		v.j = 15;
	else if (v.size + 1 > 100)
		v.j = 35;
	while ((*a))
	{
		if ((*a)->index <= v.i)
		{
			pb(a, b);
			v.i++;
		}
		else if ((*a)->index < (v.i + v.j))
		{
			pb(a, b);
			rb(b);
			v.i++;
		}
		else
			ra(a);
	}
	ft_sorted(a, b);
}

void	ft_sorted(t_node **a, t_node **b)
{
	int	i;
	int	size;

	size = ft_lstsize(*b);
	while (*b)
	{
		size = ft_lstsize(*b) - 1;
		i = ft_get_index_position(*b, size);
		if ((*b)->index == size)
			pa(a, b);
		else if (i > size / 2)
			rrb(b);
		else
			rb(b);
	}
}

int	ft_get_index_position(t_node *d, int index)
{
	int	i;

	i = 0;
	while (d)
	{
		if (d->index == index)
			break ;
		i++;
		d = d->next;
	}
	return (i);
}
