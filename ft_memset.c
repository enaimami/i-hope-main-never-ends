/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 13:16:05 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/01/07 14:57:06 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char* mem; 
	
	mem = (unsigned char*)s;
	i = 0;
	while(i < n)
	{
		mem[i] = (unsigned char)c;
		i++;
	}
	return s;
}
