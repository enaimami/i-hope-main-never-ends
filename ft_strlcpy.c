/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:06:24 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/01/14 18:08:09 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

strlcpy(char  *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	str_len;

	str_len = ft_strlen(src);
	if (size == 0)
		return (str_len);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (str_len);
}