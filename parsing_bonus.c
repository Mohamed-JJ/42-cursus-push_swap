/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:15:54 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/26 19:23:59 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	check_if_double(t_node **a)
{
	int		holder;
	int		count;
	t_node	*h;
	t_node	*h1;

	h1 = (*a);
	while ((*a))
	{
		holder = (*a)->element;
		count = 0;
		h = (*a);
		while (h)
		{
			if (holder == h->element)
				count++;
			if (h->element == holder && count >= 2)
				p_error(1);
			h = h->next;
		}
		(*a) = (*a)->next;
	}
	(*a) = h1;
}

void	free_nodes(t_node **a)
{
	while ((*a))
	{
		free((*a));
		(*a) = (*a)->next;
	}
	free((*a));
}

int	check_if_only_sign(char **a)
{
	int	i;
	int	j;
	int	c;
	int	n;

	i = 0;
	while (a[i])
	{
		j = 0;
		c = 0;
		n = 0;
		while (a[i][j])
		{
			if (ft_isdigit(a[i][j]))
				n++;
			if (a[i][j] == '-' || a[i][j] == '+')
				c++;
			j++;
		}
		if (c != 0 && n == 0)
			p_error(1);
		i++;
	}
	return (0);
}
