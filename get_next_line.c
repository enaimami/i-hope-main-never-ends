/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:32:06 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/05/02 14:25:54 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_has_newline(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	fill_stash(int fd, char **stash)
{
	char	*buf;
	int		bytes;

	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (-1);
	bytes = 1;
	while (!ft_has_newline(*stash) && bytes > 0)
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		if (bytes > 0)
		{
			buf[bytes] = '\0';
			*stash = ft_strjoin(*stash, buf);
			if (!*stash)
				bytes = -1;
		}
	}
	free(buf);
	if (bytes < 0)
		return (-1);
	return (0);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*returner;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (fill_stash(fd, &stash) < 0)
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	if (!stash || stash[0] == '\0')
		return (NULL);
	returner = ft_extract_line(&stash);
	if (returner == NULL)
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	return (returner);
}
