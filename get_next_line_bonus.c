/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjarboua <mjarboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:00:08 by mjarboua          #+#    #+#             */
/*   Updated: 2023/01/23 16:47:06 by mjarboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	*print_them_lines(char *save)
{
	int		i;
	char	*s;

	i = 0;
	if (!save[i])
		return (NULL);
	while (save[i] && save[i] != '\n')
		i++;
	if (save[i] == '\n')
		s = (char *)malloc(sizeof(char) * (i + 2));
	if (save[i] == '\0')
		s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	i = -1;
	while (save[++i] && save[i] != '\n')
		s[i] = save[i];
	if (save[i] == '\n')
	{
		s[i] = save[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*save_them_lines(char *save)
{
	int		i;
	int		c;
	char	*s;

	i = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (save[i] == 0)
	{
		free(save);
		return (NULL);
	}
	s = (char *)malloc(sizeof(char) * (ft_strlen(save) - i + 1));
	if (!s)
		return (NULL);
	if (save[i] == '\n')
		i++;
	c = 0;
	while (save[i])
		s[c++] = save[i++];
	s[c] = '\0';
	free(save);
	return (s);
}

char	*read_file(int fd, char *save)
{
	char	*buff;
	int		read_bytes;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	read_bytes = 1;
	while (new_line(save, '\n') == 0 && read_bytes != 0)
	{
		read_bytes = read(fd, buff, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(save);
			free(buff);
			return (NULL);
		}
		buff[read_bytes] = '\0';
		save = ft_strjoin(save, buff);
	}
	free(buff);
	return (save);
}

char	*get_next_line(int fd)
{
	char		*ret;
	static char	*saved[12000];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	saved[fd] = read_file(fd, saved[fd]);
	if (!saved[fd])
		return (NULL);
	ret = print_them_lines(saved[fd]);
	saved[fd] = save_them_lines(saved[fd]);
	return (ret);
}
