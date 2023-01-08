/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:08:56 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/07 20:41:04 by mjarboua         ###   ########.fr       */
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
	int				index;
	struct l_node	*next;
}				t_node;

// parsing function
// int		check_number(char *str);
// int		check_number_arr(char **str);
// void	check_if_double(int *arr);
// t_node	*ft_allocatenode(char	**str);
// t_node	*ft_checked(char **av, int ac);
// char	*ft_joined(char **av);
// int		check_sign(char **a);
// char	**ft_clear(char *str);
// int		ft_strchr(char c, char *set);

// array handling functions
int		ft_atoi(char *str);
int		*split_arr(char *str);
int		*convert_arr(char **str);
int		ft_strlen(char *s);
char	*ft_substr(char *s, int start, int len);
char	**ft_split(char const *s, char c);
char	*ft_strdup(char *s1);
char	*ft_strjoin(char *s1, char *s2);

// list functions
t_node	*ft_last_node(t_node *node);
t_node	*ft_lstnew(int content);
t_node	*ft_allocatenode(char **av);
void	give_them_index(t_node **a);
void	ft_lstadd_back(t_node **lst, t_node *new);
void	ft_lstadd_front(t_node **lst, t_node *new);
void	ft_before_last(t_node **node);
void	zero_index(t_node **a);
void	rb(t_node **b);
void	ra(t_node **a);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	pa(t_node **a, t_node **b);
void	sa(t_node *a);
void	sb(t_node *b);
int		ft_get_before_index(t_node **a, int index);
int		ft_get_after_index(t_node **a, int index);
void	push_to_b(t_node **a, t_node **b);
int		ft_lstsize(t_node *d);
int		are_sorted(t_node *a);

// sorting function

void	check_list_size(t_node **a);
void	ft_sort_two(t_node **a);
void	ft_sort_three(t_node **a);


// helping functions

void	ft_putc(char c);
int		get_arr_len(char **str);
void	ft_puts(char *str);
void	p_exit(int code);
void	p_error(int code);


#endif