/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:08:41 by mjarboua          #+#    #+#             */
/*   Updated: 2022/12/27 21:11:47 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		*c;

	if (ac < 2)
		return (write(2, "Error\n", 6), 0);
	else if (ac == 2)
	{
		if (check_number(av[1]) == 0)
			write(2, "Error\n", 6);
		c = split_arr(av[1]);
	}
	else
	{
		if (check_number_arr(av) == 0)
			write(2, "Error\n", 6);
		c = convert_arr(av, 1);
	}
	check_if_double(c);
}