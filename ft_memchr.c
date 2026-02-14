/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 19:12:28 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/01/29 08:22:10 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pt;
	unsigned char	uc;

	uc = (unsigned char)c;
	pt = (unsigned char *)s;
	while (n--)
	{
		if (*pt == uc)
			return ((void *)pt);
		pt++;
	}
	return (NULL);
}
