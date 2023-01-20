/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:08:41 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/20 19:34:35 by mjarboua         ###   ########.fr       */
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

t_node	*join_split(char **av, int ac)
{
	int		i;
	char	**a;
	char	*s;
	t_node	*ab;

	i = 0;
	if (ac == 2 && check_spaces(av))
		a = ft_split(av[1], ' ');
	else
	{
		if (check_spaces(av))
			p_error(1);
		s = ft_joined(av);
		a = ft_split(s, ' ');
		free(s);
	}
	if (check_spaces(a) || check_if_num(a) || check_if_not_num(a)
		|| check_sign(a) || check_after_num(a))
		return (NULL);
	ab = ft_allocatenode(a);
	free_all_1(a);
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
	// while (a)
	// {
	// 	printf("%d\n", a->element);
	// 	a = a->next;
	// }
	free_nodes(&a);
	return (0);
}
