/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:08:41 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/17 21:29:05 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	check_if_max_min(t_node **a)
// {
// 	while (*a)
// 	{
// 		if (*a->element > 2147483647 || *a->element < -2147483648)
// 			p_error(1);
// 		a = a->next;
// 	}
// 	return (0);
// }

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

t_node	*join_split(char **av, int ac)
{
	int		i;
	char	**a;
	char	*s;
	t_node	*ab;

	i = 0;
	if (ac > 2)
	{
		s = ft_joined(av);
		a = ft_split(s, ' ');
		free(s);
	}
	else if (ac == 2)
		a = ft_split(av[1], ' ');
	if (check_spaces(a) || check_if_num(a)
		|| check_sign(a) || check_after_num(a))
		return (NULL);
	ab = ft_allocatenode(a);
	if (check_if_double(&ab) || are_sorted(ab))
		return (NULL);
	return (ab);
}

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;

	if (ac == 1)
		p_error(1);
	a = join_split(av, ac);
	give_them_index(&a);
	check_list_size(&a, &b);
	return (0);
}
