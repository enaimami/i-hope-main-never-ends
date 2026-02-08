/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:48:05 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/01/13 23:40:31 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*temp;

	if (!s)
		return (NULL);
	temp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 0x01));
	if (!temp)
		return (NULL);
	i = 0x00;
	while (s[i])
	{
		temp[i] = s[i];
		i++;
	}
	temp[i] = 0x00;
	return (temp);
}
