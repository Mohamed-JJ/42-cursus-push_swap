/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:15:54 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/01 21:48:40 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= '0' && str[i] <= '9')
				|| str[i] == ' ' || str[i] == '+' || str[i] == '-'))
			return (0);
		i++;
	}
	return (1);
}

int	*convert_arr(char **str, int f)
{
	int	i;
	int	*ptr;

	i = 0;
	ptr = malloc((get_arr_len(str)) * sizeof(int));
	if (f == 1)
		str++;
	while (*str)
	{
		ptr[i] = ft_atoi(*str);
		i++;
		str++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	check_number_arr(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (!(str[i][j] >= '0' && str[i][j] <= '9'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	check_if_double(int *arr)
{
	int	i;
	int	j;
	int	holder;
	int	count;

	i = 0;
	while (arr[i])
	{
		holder = arr[i];
		count = 0;
		j = 0;
		while (arr[j])
		{
			if (arr[i] == arr[j])
				count++;
			if (arr[i] == arr[j] && count == 2)
			{
				write(2, "Error\n", 6);
				exit(0);
			}
			j++;
		}
		i++;
	}
}

// t_node	*uni_check(char **av, int ac)
// {
// 	int		i;
// 	t_node	*head;
// 	char 	*num;

// 	i = 1;
// 	if (ac == 2)
// 		av = checked_splitted(av[1]);
// 	else if (ac > 2)
// 		av = joined_string(av);
// 	if (check_if_not(av));
// }

// char	**checked_splitted(char *av)
// {
// 	int	i;
// 	int	j;

// 	i = 1;
// 	while (av[i])
// 	{
// 		if (av[i] != ' ' || av[i] != '+'
// 			|| av[i] != '-' || (av[i] >= '0' && av[i] <= '9'))
// 			p_exit(1);
// 	}
	
// }