/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 22:27:35 by mjarboua          #+#    #+#             */
/*   Updated: 2022/12/30 20:33:40 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_lstnew(int content)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->element = content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*node;

	node = *lst;
	if (*lst == NULL)
		*lst = new;
	else
	{
		while (node->next != NULL)
			node = node->next;
		node->next = new;
	}
}

void	ft_lstadd_front(t_node **lst, t_node *new)
{	
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

t_node	*ft_last_node(t_node *node)
{
	if (!node)
		return (NULL);
	while (node->next)
		node = node->next;
	return (node);
}

int	ft_lstsize(t_node *d)
{
	int	i;

	i = 0;
	if (!d)
		return (0);
	while (d)
	{
		d = d->next;
		i++;
	}
	return (i);
}
