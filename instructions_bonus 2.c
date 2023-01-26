/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_bonus 2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:09:33 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/23 16:47:15 by mjarboua         ###   ########.fr       */
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
