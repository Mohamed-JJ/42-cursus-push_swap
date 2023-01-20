/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:41:03 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/20 19:35:48 by mjarboua         ###   ########.fr       */
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

int	are_sorted_checker(t_node *a, int i)
{
	t_node	*h;

	h = a;
	if (ft_lstsize(a) != i)
		return (1);
	while (a)
	{
		h = a;
		while (h)
		{
			if (a->element > h->element)
			{
				return (1);
			}
			h = h->next;
		}
		a = a->next;
	}
	return (0);
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

void	check_instruction(char *c, t_node **a, t_node **b)
{
	if (c[0] == 's' && c[1] == 'a' && c[2] == '\n' && c[3] == '\0')
		sa(a);
	else if (c[0] == 's' && c[1] == 'b' && c[2] == '\n' && c[3] == '\0')
		sb(b);
	else if (c[0] == 'r' && c[1] == 'a' && c[2] == '\n' && c[3] == '\0')
		ra(a);
	else if (c[0] == 'r' && c[1] == 'b' && c[2] == '\n' && c[3] == '\0')
		rb(b);
	else if (c[0] == 'r' && c[1] == 'r'
		&& c[2] == 'a' && c[3] == '\n' && c[4] == '\0')
		rra(a);
	else if (c[0] == 'r' && c[1] == 'r'
		&& c[2] == 'b' && c[3] == '\n' && c[4] == '\0')
		rrb(b);
	else if (c[0] == 'p' && c[1] == 'b' && c[2] == '\n' && c[3] == '\0')
		pb(a, b);
	else if (c[0] == 'p' && c[1] == 'a' && c[2] == '\n' && c[3] == '\0')
		pa(a, b);
	else
		p_error(1);
}

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	char	*c;
	int		i;

	if (ac == 1)
		p_error(0);
	a = join_split(av, ac);
	i = ft_lstsize(a);
	c = get_next_line(0);
	while (c)
	{
		if (c == NULL)
			break ;
		check_instruction(c, &a, &b);
		free(c);
		c = get_next_line(0);
	}
	free(c);
	if (are_sorted_checker(a, i) == 0)
		ft_puts("OK\n");
	else
		ft_puts("KO\n");
	free_nodes(&a);
	return (0);
}
