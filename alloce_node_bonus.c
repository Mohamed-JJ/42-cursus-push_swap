/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloce_node_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:50:13 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/27 16:20:57 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_node	*ft_allocatenode(char **av)
{
	int		i;
	t_node	*head;

	i = 0;
	head = NULL;
	while (av[i])
	{
		ft_lstadd_back(&head, ft_lstnew(ft_atoi(av[i])));
		i++;
	}
	return (head);
}

void	rr(t_node **a, t_node **b)
{
	if (!(*b) || (*a))
		return ;
	ra(a);
	rb(b);
}

void	tatima(char *c, t_node **a, t_node **b)
{
	if (c[0] == 'r' && c[1] == 'r' && c[2] == '\n' && c[3] == '\0')
		rr(a, b);
	else if (c[0] == 'r' && c[1] == 'r' && c[2] == 'r'
		&& c[3] == '\n' && c[4] == '\0')
		rrr(a, b);
	else
		p_error(1);
}
