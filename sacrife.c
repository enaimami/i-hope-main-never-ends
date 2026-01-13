/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sacrife.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:53:36 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/01/13 18:53:38 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*merhaba;
	char	*merhaba2;

	merhaba = ft_strdup("merhaba");
	merhaba2 = strdup("merhaba");
	merhaba[0] = 'a';
	merhaba2[0] = 'a';
	printf("%s,%s", merhaba, merhaba2);
	return (0);
}
