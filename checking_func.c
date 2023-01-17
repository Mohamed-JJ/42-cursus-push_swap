/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_func.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:00:47 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/17 21:16:44 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_if_sorted(t_node **a)
{
	t_node	*h;
	t_node	*c;

	c = (*a);
	while ((*a))
	{
		h = (*a);
		while (h)
		{
			if (h->element > (*a)->element)
				return ;
			h = h->next;
		}
		(*a) = (*a)->next;
	}
	(*a) = c;
	p_error(0);
}

int	check_after_num(char **b)
{
	int	i;
	int	j;

	i = 0;
	while (b[i])
	{
		j = 0;
		while (b[i][j])
		{
			if (b[i][j] >= '0' && b[i][j] <= '9')
			{
				while (b[i][j])
				{
					if (!(b[i][j] >= '0' && b[i][j] <= '9') && b[i][j] != ' '
						&& b[i][j] != '-' && b[i][j] != '+')
						p_error(1);
					j++;
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	check_spaces(char **a)
{
	int	i;
	int	j;
	int	s;

	i = 1;
	while (a[i])
	{
		j = 0;
		s = 0;
		if (ft_strlen(a[i]) == 0)
			p_error(1);
		while (a[i][j])
		{
			if (a[i][j] >= '0' && a[i][j] <= '9')
				s++;
			j++;
		}
		if (s == 0)
			p_error(1);
		i++;
	}
	return (0);
}

int	check_if_num(char **a)
{
	int		i;
	int		j;
	char	*s;
	int		c;
	int		h;

	i = 1;
	s = "0123456789-+ ";
	while (a[i])
	{
		j = 0;
		while (a[i][j])
		{
			if (!(a[i][j] >= '0' && a[i][j] <= '9')
				&& a[i][j] != '-' && a[i][j] != '+')
				p_error(1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_sign(char **a)
{
	int	i;
	int	j;
	int	s;

	i = 1;
	while (a[i])
	{
		j = 0;
		s = 0;
		while (a[i][j])
		{
			if (a[i][j] == '+' || a[i][j] == '-')
				s++;
			j++;
		}
		if (s > 1)
			p_error(1);
		i++;
	}
	return (0);
}
