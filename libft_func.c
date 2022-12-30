/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 21:26:53 by mjarboua          #+#    #+#             */
/*   Updated: 2022/12/29 14:03:12 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
{
	int			i;
	int			sign;
	long long	result;

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
		result *= 10;
		result = result + str[i++] - 48;
	}
	result *= sign;
	return (result);
}

char	*ft_strjoin(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	total_len;
	char			*mstr;

	if (!s2)
		return (NULL);
	if (!s1)
		ft_strdup("");
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	mstr = malloc(total_len * sizeof(char));
	if (!mstr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		mstr[i] = ((char *)s1)[i];
		i++;
	}
	j = 0;
	while (s2[j])
		mstr[i++] = ((char *)s2)[j++];
	mstr[i] = '\0';
	return (mstr);
}