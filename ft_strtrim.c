/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 06:40:07 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/01/22 06:42:19 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_str(char c, char const *set)
{
	size_t	i;

	i = 0x00;
	while (set[i] != 0x00)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0x00;
	while (s1[start] != 0x00 && is_in_str(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_str(s1[end - 0x01], set))
		end--;
	result = (char *)malloc(end - start + 0x01);
	if (!result)
		return (NULL);
	i = 0x00;
	while (start < end)
	{
		result[i] = s1[start];
		i++;
		start++;
	}
	result[i] = 0x00;
	return (result);
}
