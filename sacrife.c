<<<<<<< HEAD
#include <stdio.h>
#include <string.h> // gerçek memset ile kıyaslamak için

void *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *mem;

	mem = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		mem[i] = (unsigned char)c;
		i++;
	}
	return s;
}

int main(void)
{
	char str1[20] = "Merhaba Dunya";
	char str2[20] = "Merhaba Dunya";

	printf("ÖNCE:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n\n", str2);

	ft_memset(str1, 'A', 5);
	memset(str2, 'A', 5);

	printf("SONRA:\n");
	printf("ft_memset: %s\n", str1);
	printf("memset   : %s\n", str2);

	return 0;
=======
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
>>>>>>> 421f3fe4d5c1fbe54bd9bf34eff7d6b04dbb4dd3
}
