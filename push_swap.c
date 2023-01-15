/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:08:41 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/15 20:09:46 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_push_swap(t_node	**b, t_node **a, char **av)
// {
// 	a = ft_allocatenode(av);
// 	give_them_index(&a);
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
	}
	else if (ac == 2)
		a = ft_split(av, ' ');
	if (check_sign || check_spaces || check_non_num)
		p_error(1);
	
}

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;

	if (ac == 1)
		p_error(1);
	char	*str = ft_joined(av);
	printf("%s", str);
	return (0);
}
