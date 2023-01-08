/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:15:54 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/03 15:38:28 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*convert_arr(char **str)
{
	int	i;
	int	*ptr;

	i = 0;
	ptr = malloc((get_arr_len(str)) * sizeof(int));
	while (*str)
	{
		ptr[i] = ft_atoi(*str);
		i++;
		str++;
	}
	ptr[i] = '\0';
	return (ptr);
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
				p_error(1);
			j++;
		}
		i++;
	}
}
