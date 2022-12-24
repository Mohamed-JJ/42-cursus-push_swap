/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:15:54 by mjarboua          #+#    #+#             */
/*   Updated: 2022/12/24 22:06:03 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*convert_arr(char **str)
{
	int	i = 0;
	int	*ptr;

	ptr = malloc((get_arr_len(str)) * sizeof(int));
	str++;
	while (*str)
	{
		ptr[i] = ft_atoi(*str);
		printf("%d\n", ptr[i]);
		i++;
		str++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	chech_if_nmuber(char **str)
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
