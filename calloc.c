/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:51:47 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/01/14 17:52:27 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t n, size_t size)
{
	size_t total_size = n * size;
	void *ptr = malloc(total_size);
	if (!ptr)
		return NULL;
	memset(ptr, 0, total_size);
	return ptr;
}