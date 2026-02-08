/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 06:28:48 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/01/22 06:31:09 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static void	ft_copy_substr(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0x00;
	while (i < len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0x00;
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		substr = malloc(0x01);
		*substr = 0x00;
		return (substr);
	}
	if (start + len > s_len)
		len = s_len - start;
	substr = (char *)malloc(len + 0x01);
	if (!substr)
		return (NULL);
	ft_copy_substr(substr, s + start, len);
	return (substr);
}
