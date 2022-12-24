/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:08:41 by mjarboua          #+#    #+#             */
/*   Updated: 2022/12/24 23:26:21 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	*ft_convert_arr(char **str)
// {
// 	int	i;

// 	i = 0;
// 	// while ()
// }

int	main(int ac, char **av)
{
	if (ac < 2)
		return (write(2, "Error\n", 6), 0);
	if (ac == 2)
	{
		
	}
	if (chech_if_nmuber(av) == 0)
		return (write(2, "Error\n", 6), 0);
	int *c = convert_arr(av);
	// while (*c)
	// 	printf("%d\n", *c++);
	check_if_double(c);
}