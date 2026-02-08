/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 18:12:38 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/01/20 11:30:09 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	str_len;

	dst_len = ft_strlen(dst);
	str_len = ft_strlen(src);
	i = 0x00;
	if (size <= dst_len)
	{
		return (size + str_len);
	}
	while (src[i] != 0x00 && dst_len + i < size - 0x01)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = 0x00;
	return (dst_len + str_len);
}
