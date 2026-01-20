/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 11:47:15 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/01/20 11:53:20 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char *strrchr(const char *s, int c)
{
	int i;
	size_t str_len;

	str_len = ft_strlen(s);
	i = str_len;
	if (c == '\0')
		return &s[str_len];
	while (str_len >= 0)
	{
		if (s[str_len] == c)
			return &s[str_len];
		str_len--;
	}
	return NULL;
}