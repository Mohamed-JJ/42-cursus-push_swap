/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:34:53 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/01 21:45:06 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putc(char c)
{
	write(1, &c, 1);
}

void	ft_puts(char *str)
{
	while (*str)
		ft_putc(*str++);
}

int	get_arr_len(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	p_exit(int code)
{
	if (code == 1)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	exit (0);
}
