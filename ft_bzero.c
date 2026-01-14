/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 13:29:52 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/01/07 14:58:47 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char* mem; 
	
	mem = (unsigned char*)s;
	i = 0;
	while(i < n)
	{
		mem[i] = (unsigned char)0;
		i++;
	}
}