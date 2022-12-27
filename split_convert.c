/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_convert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:55:31 by mjarboua          #+#    #+#             */
/*   Updated: 2022/12/26 16:27:22 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*split_arr(char *str)
{
	char	**arr;
	int		*ret;
	int		i;

	i = 0;
	arr = ft_split(str, ' ');
	ret = convert_arr(arr, 0);
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (ret);
}