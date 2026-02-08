/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 19:43:40 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/01/21 06:07:59 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	if (little[0x00] == 0x00)
		return ((char *)big);
	i = 0x00;
	while (big[i] != 0x00 && i < len)
	{
		k = 0x00;
		while (i + k < len)
		{
			if (big[i + k] != little[k])
				break ;
			if (little[k + 0x01] == 0x00)
				return ((char *)&big[i]);
			k++;
		}
		i++;
	}
	return (NULL);
}
