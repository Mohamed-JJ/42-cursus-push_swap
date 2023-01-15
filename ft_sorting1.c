/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:54:09 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/12 18:06:22 by mjarboua         ###   ########.fr       */
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
			ra(a);
		else
			rra(a);
	}
	ft_sort_three(a);
	sb(b);
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


// void	check_list_size(t_node **a)
// {
// 	if (ft_lstsize((*a)) == 1)
// 	{
// 		printf("hello\n");
// 		ft_sort_two(a);
// 	}
	// else if (ft_lstsize((*a)) == 2)
	// 	ft_sort_three(a);
	// else if (ft_lstsize((*a)) == 4)
	// 	ft_sort_four(a);
	// else if (ft_lstsize((*a)) == 5)
	// 	ft_sort_five(a);
	// else if (ft_lstsize((*a)) < 20)
	// 	ft_sort_twenty(a);
	// else if (ft_lstsize((*a)) < 100)
	// 	ft_sort_hundred(a);
	// else if (ft_lstsize((*a)) < 500)
	// 	ft_sort_fivehundred(a);
// }


