/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:32:06 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/04/28 00:00:00 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

char	*ft_strjoin(char *stash, char *buf)
{
	char	*merged;
	int		s_len;

	s_len = ft_strlen(stash);
	merged = malloc(s_len + ft_strlen(buf) + 1);
	if (!merged)
	{
		free(stash);
		return (NULL);
	}
	if (stash)
		ft_strcpy(merged, stash);
	else
		merged[0] = '\0';
	ft_strcpy(merged + s_len, buf);
	free(stash);
	return (merged);
}

static char	*ft_strndup(char *src, int n)
{
	char	*dst;
	int		i;

	dst = malloc(n + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[n] = '\0';
	return (dst);
}

static char	*get_tail(char *stash, int cut)
{
	char	*tail;

	if (!stash[cut])
		return (NULL);
	tail = malloc(ft_strlen(stash + cut) + 1);
	if (!tail)
		return (NULL);
	ft_strcpy(tail, stash + cut);
	return (tail);
}

char	*ft_extract_line(char **stash)
{
	char	*line;
	char	*tail;
	int		cut;

	cut = 0;
	while ((*stash)[cut] && (*stash)[cut] != '\n')
		cut++;
	if ((*stash)[cut] == '\n')
		cut++;
	line = ft_strndup(*stash, cut);
	if (!line)
		return (NULL);
	tail = get_tail(*stash, cut);
	if (!tail && (*stash)[cut])
	{
		free(line);
		free(*stash);
		*stash = NULL;
		return (NULL);
	}
	free(*stash);
	*stash = tail;
	return (line);
}
