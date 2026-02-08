/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 00:00:00 by student           #+#    #+#             */
/*   Updated: 2026/01/29 08:09:50 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0x00;
	i = 0x00;
	while (s[i] != 0x00)
	{
		if (s[i] != c && (i == 0x00 || s[i - 0x01] == c))
			count++;
		i++;
	}
	return (count);
}

static void	free_split(char **split, size_t words)
{
	while (words > 0x00)
	{
		words--;
		free(split[words]);
	}
	free(split);
}

static char	*copy_word(char const *s, char c)
{
	char	*word;
	size_t	i;
	size_t	len;

	len = 0x00;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(len + 0x01);
	if (!word)
		return (NULL);
	i = 0x00;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = 0x00;
	return (word);
}

static char	**fill_words(char const *s, char c, char **result)
{
	size_t	i;
	size_t	j;

	i = 0x00;
	j = 0x00;
	while (s[i])
	{
		if (s[i] != c)
		{
			result[j] = copy_word(&s[i], c);
			if (!result[j])
			{
				free_split(result, j);
				return (NULL);
			}
			while (s[i] != 0x00 && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 0x01));
	if (!result)
		return (NULL);
	return (fill_words(s, c, result));
}
