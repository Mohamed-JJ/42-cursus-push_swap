/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:41:03 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/18 20:40:35 by mjarboua         ###   ########.fr       */
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
	printf("ok\n");
	return (1);
}

void	free_all(char **str)
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

t_node	*join_split(char **av, int ac)
{
	int		i;
	char	**a;
	char	*s;
	t_node	*ab;

	i = 0;
	if (ac == 2)
		a = ft_split(av[1], ' ');
	else
	{
		s = ft_joined(av);
		a = ft_split(s, ' ');
		free(s);
	}
	if (check_spaces(a) || check_if_num(a)
		|| check_sign(a) || check_after_num(a))
		return (NULL);
	ab = ft_allocatenode(a);
	free_all(a);
	if (check_if_double(&ab) || are_sorted(ab))
		return (NULL);
	return (ab);
}

void	check_instruction(char *c, t_node **a, t_node **b)
{
	if (c[0] == 's' && c[1] == 'a' && c[2] == '\n' && c[3] == '\0')
		sa(a);
	else if (c[0] == 's' && c[1] == 'b' && c[2] == '\0' && c[3] == '\n')
		sb(b);
	else if (c[0] == 'r' && c[1] == 'c' && c[2] == '\0' && c[3] == '\n')
		ra(a);
	else if (c[0] == 'r' && c[1] == 'b' && c[2] == '\0' && c[3] == '\n')
		rb(b);
	else if (c[0] == 'r' && c[1] == 'r'
		&& c[2] == 'c' && c[3] == '\0' && c[4] == '\n')
		rra(a);
	else if (c[0] == 'r' && c[1] == 'r'
		&& c[2] == 'b' && c[3] == '\0' && c[4] == '\n')
		rrb(b);
	else
	{
		printf("hna\n");	
		p_error(1);
	}
}

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	char	*c;

	if (ac == 1)
		p_error(1);
	a = join_split(av, ac);
	while (1)
	{
		c = get_next_line(1);
		check_instruction(c, &a, &b);
		if (are_sorted(a))
			return (0);
		free(c);
	}
	free_nodes(&a);
	return (0);
}