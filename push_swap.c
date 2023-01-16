/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:08:41 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/16 21:28:58 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_push_swap(t_node	**b, t_node **a, char **av)
// {
// 	a = ft_allocatenode(av);
// 	give_them_index(&a);
// }

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
			if (!(a[i][j] >= '0' && a[i][j] <= '9'))
				p_error(1);
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
		{
			p_error(1);
		}
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

int	checck_after_num(char **b)
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
					if (!(b[i][j] >= '0' && b[i][j] <= '9') && b[i][j] != ' ')
					{
						// printf("%c", b[i][j]);
						p_error(1);
					}
					j++;
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}

// int	are_sorted(t_node *a)
// {
// 	t_node	*h;

// 	h = a;
// 	while (a)
// 	{
// 		h = a;
// 		while (h)
// 		{
// 			if (a->element > h->element)
// 				return (0);
// 			h = h->next;
// 		}
// 		a = a->next;
// 	}
// 	return (1);
// }

void	join_split(char **av, int ac)
{
	int		i;
	char	**a;
	char	*s;

	i = 0;
	if (ac > 2)
	{
		s = ft_joined(av);
		a = ft_split(s, ' ');
		free(s);
	}
	else if (ac == 2)
		a = ft_split(av[1], ' ');
	if (check_spaces(a) || check_if_num(a) || check_sign(a) || checck_after_num(a))
		return ;
}

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;

	if (ac == 1)
		p_error(1);
		// printf("%d")
	// printf("%d\n", check_spaces(av));
	join_split(av, ac);
	
	return (0);
}
