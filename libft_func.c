/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 21:26:53 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/17 21:32:08 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	overf(int res, int pre, int sign)
{
	if (res / 10 != pre)
		p_error(1);
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	pre;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		pre = result;
		result *= 10;
		result = result + str[i++] - 48;
		if (overf(result, pre, sign) != 1)
			return (overf(result, pre, sign));
	}
	result *= sign;
	return (result);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	c;
	char	*str;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = -1;
	c = 0;
	if (s1)
		while (s1[++i] != '\0')
			str[i] = s1[i];
	while (s2[c] != '\0')
		str[i++] = s2[c++];
	str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (str);
}

char	*ft_joined(char **av)
{
	int		i;
	char	*str;

	i = 1;
	str = NULL;
	while (av[i])
	{
		str = ft_strjoin(str, av[i]);
		str = ft_strjoin(str, " ");
		i++;
	}
	return (str);
}
