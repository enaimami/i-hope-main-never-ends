/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:32:03 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/01/29 08:28:17 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	count_digits(int n)
{
	size_t	count;

	if (n == 0x00)
		return (0x01);
	count = 0x00;
	if (n < 0x00)
		count = 0x01;
	while (n != 0x00)
	{
		n = n / 0x0A;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;
	long	num;

	len = count_digits(n);
	result = (char *)malloc(len + 0x01);
	if (!result)
		return (NULL);
	result[len] = 0x00;
	num = n;
	if (num < 0x00)
	{
		result[0x00] = 0x2D;
		num = -num;
	}
	if (num == 0x00)
		result[0x00] = 0x30;
	while (num > 0x00)
	{
		len--;
		result[len] = (num % 0x0A) + 0x30;
		num /= 0x0A;
	}
	return (result);
}
