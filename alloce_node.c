/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloce_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:50:13 by mjarboua          #+#    #+#             */
/*   Updated: 2022/12/30 12:53:31 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*head_allocator(char **av, int ac)
{
	int		i;
	t_node	*head;

	i = 1;
	while (i < ac)
	{
		ft_lstadd_back(&head, ft_lstnew(ft_atoi(av[i])));
		i++;
	}
	return (head);
}
