/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloce_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:50:13 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/17 16:32:58 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
