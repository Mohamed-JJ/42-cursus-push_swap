/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:54:09 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/17 21:17:14 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct l_data
{
	int	size;
	int	i;
	int	j;
}				t_data;

void	ft_sort_five(t_node **a, t_node **b)
{
	t_data	v;
	int		i;

	v.i = 0;
	i = 0;
	while (*a)
	{
		v.size = ft_lstsize(*a) - 1;
		if ((*a)->index == i)
		{
			pb(a, b);
			i++;
			if (i == 2)
				break ;
		}
		else if (ft_get_index_position(*a, 0) < v.size / 2)
			ra(a);
		else
			rra(a);
	}
	ft_sort_three(a);
	pa(a, b);
	pa(a, b);
	give_them_index(a);
}

void	ft_sort_four(t_node **a, t_node **b)
{
	int		size;
	int		i;
	int		j;
	t_node	*h;

	size = ft_lstsize((*a));
	h = (*a);
	give_them_index(a);
	while ((*a))
	{
		if ((*a)->index == 0)
		{
			pb(a, b);
			break ;
		}
		else
			ra(a);
	}
	ft_sort_three(a);
	pa(b, a);
}

void	ft_sort_two(t_node **a)
{
	sa(a);
}

void	ft_sort_three(t_node **a)
{
	t_node	*h;

	give_them_index(a);
	h = (*a);
	if ((*a)->index == 1 && (*a)->next->index == 0
		&& (*a)->next->next->index == 2)
		sa(a);
	else if ((*a)->index == 2 && (*a)->next->index == 1
		&& (*a)->next->next->index == 0)
	{
		sa(a);
		rra(a);
	}
	else if ((*a)->index == 2 && (*a)->next->index == 0
		&& (*a)->next->next->index == 1)
		ra(a);
	else if ((*a)->index == 0 && (*a)->next->index == 2
		&& (*a)->next->next->index == 1)
	{
		sa(a);
		ra(a);
	}
	else
		rra(a);
}

void	check_list_size(t_node **a, t_node **b)
{
	give_them_index(a);
	if (ft_lstsize((*a)) == 1)
		ft_sort_two(a);
	else if (ft_lstsize((*a)) == 2)
		ft_sort_three(a);
	else if (ft_lstsize((*a)) == 4)
		ft_sort_four(a, b);
	else if (ft_lstsize((*a)) == 5)
		ft_sort_five(a, b);
	else if (ft_lstsize((*a)) > 5)
		ft_send_to_b(a, b);
}
