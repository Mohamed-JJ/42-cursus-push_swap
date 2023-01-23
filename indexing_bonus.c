/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:50:21 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/23 16:47:12 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	free_all_1(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	give_them_index(t_node **a)
{
	t_node	*h;
	t_node	*s;
	t_node	*head1;

	h = (*a);
	s = (*a);
	zero_index(a);
	while (h)
	{
		head1 = (*a);
		while (head1)
		{
			if (h->element > head1->element)
				h->index++;
			head1 = head1->next;
		}
		h = h->next;
	}
}

void	zero_index(t_node **a)
{
	t_node	*head;

	head = (*a);
	while ((*a))
	{
		(*a)->index = 0;
		(*a) = (*a)->next;
	}
	(*a) = head;
}

int	check_if_not_num(char **a)
{
	int	i;
	int	j;

	i = 0;
	while (a[i])
	{
		j = 0;
		while (a[i][j])
		{
			if ((!ft_isdigit(a[i][j])) && a[i][j] != '+' && a[i][j] != '-')
				p_error(1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}
