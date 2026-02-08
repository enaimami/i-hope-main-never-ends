/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:51:47 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/01/29 08:21:38 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t n, size_t size)
{
	size_t	total;
	void	*ptr;

	if (n == 0 || size == 0)
	{
		ptr = malloc(0);
		return (ptr);
	}
	if (n > (size_t)-1 / size)
		return (NULL);
	total = n * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
