/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:25:04 by mdisbuda          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/01/07 13:06:50 by mdisbuda         ###   ########.fr       */
=======
/*   Updated: 2026/01/09 15:55:24 by mdisbuda         ###   ########.fr       */
>>>>>>> 421f3fe4d5c1fbe54bd9bf34eff7d6b04dbb4dd3
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
int	ft_strlen(const char *str)
=======
size_t	ft_strlen(const char *str)
>>>>>>> 421f3fe4d5c1fbe54bd9bf34eff7d6b04dbb4dd3
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
