/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:08:56 by mjarboua          #+#    #+#             */
/*   Updated: 2022/12/27 21:20:48 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct l_node
{
	int				element;
	struct l_node	*next;
	struct l_node	*prev;
}				t_node;

// parsing function
int		check_number(char *str);
int		check_number_arr(char **str);
void	check_if_double(int *arr);

// array handling functions
int		ft_atoi(char *str);
int		*split_arr(char *str);
int		*convert_arr(char **str, int f);
int		ft_strlen(char *s);
char	*ft_substr(char *s, int start, int len);
char	**ft_split(char const *s, char c);
char	*ft_strdup(char *s1);

// list functions
t_node	*ft_lst_new(int content);
void	ft_lstadd_back(t_node **lst, t_node *new);
void	ft_lstadd_front(t_node **lst, t_node *new);
t_node	*ft_last_node(t_node *node);
int		ft_lstsize(t_node *d);

// helping functions
void	ft_putc(char c);
int		get_arr_len(char **str);
void	ft_puts(char *str);

#endif