/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:06:24 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/01/20 11:18:01 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	str_len;

	str_len = ft_strlen(src);
	if (size == 0x00)
	{
		return (str_len);
	}
	i = 0x00;
	while (src[i] != 0x00 && i < size - 0x01)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0x00;
	return (str_len);
}
