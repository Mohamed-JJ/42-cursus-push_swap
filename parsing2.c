/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:38:14 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/08 12:05:18 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sign(char **a)
{
	int	i;
	int	j;
	int	c;
	int	c1;

	i = 0;
	while (a[i])
	{
		c = 0;
		c1 = 0;
		j = 0;
		while (a[i][j])
		{
			if (a[i][j] == '+' || a[i][j] == '-')
				c++;
			if (a[i][j] >= '0' && a[i][j] <= '9')
				c1++;
			j++;
		}
		if (c > 1 || (c >= 1 && c1 == 0))
			return (1);
		i++;
	}
	return (0);
}

// you should check if you passed  multiple spaces with no number to the argument, if there is no number the argument is not valid, else the argument is valid

char	**ft_clear(char *str)
{
	char	*set;
	int		i;
	int		j;
	char	**arr;

	set = "-+0123456789 ";
	i = 0;
	while (str[i])
	{
		if (ft_strchr(str[i], set) == 1)
			p_error(1);
		i++;
	}
	i = 0;
	if (space_checker(a))
		p_error(1);
	arr = ft_split(str, ' ');
	if (check_sign(arr))
		p_error(1);
	return (arr);
}

t_node	*ft_checked(char **av, int ac)
{
	int		*num;
	char	*str;
	char	**a;
	t_node	*nums;

	if (ac == 1)
		p_error(1);
	else if (ac == 2)
	{
		if (av[1][0] == '\0')
			p_error(1);
		a = ft_clear(av[1]);
	}
	else if (ac > 2)
	{
		str = ft_joined(av);
		a = ft_clear(str);
	}
	free(str);
	num = convert_arr(a);
	check_if_double(num);
	free(num);
	nums = ft_allocatenode(a);
	return (nums);
}

void	check_if_sorted(t_node **a)
{
	t_node	*h;
	t_node	*c;

	c = (*a);
	while ((*a))
	{
		h = (*a);
		while (h)
		{
			if (h->element > (*a)->element)
				return ;
			h = h->next;
		}
		(*a) = (*a)->next;
	}
	(*a) = c;
	p_error(0);
}
