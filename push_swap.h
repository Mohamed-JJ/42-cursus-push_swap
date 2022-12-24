/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:08:56 by mjarboua          #+#    #+#             */
/*   Updated: 2022/12/24 23:30:58 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct l_data
{
	int				*ptr;
	int				element;
	int				counter;
	struct l_data	*next;
	struct l_data	*prvs;
	struct l_data	*l;
}				t_data;

int		chech_if_nmuber(char **str);
void	ft_putc(char c);
int		get_arr_len(char **str);
void	ft_puts(char *str);
int		ft_atoi(char *str);
int		*convert_arr(char **str);
void	check_if_double(int *arr);
char	**ft_split(char const *s, char c);
char	*ft_substr(char *s, int start, int len);
char	*ft_strdup(char *s1);
int		ft_strlen(char *s);


#endif