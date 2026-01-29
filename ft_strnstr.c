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

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		k = 0;
		while (i + k < len)
		{
			if (big[i + k] != little[k])
				break ;
			if (little[k + 1] == '\0')
				return ((char *)&big[i]);
			k++;
		}
		i++;
	}
	return (NULL);
}
