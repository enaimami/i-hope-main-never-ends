/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 23:00:00 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/03/15 23:44:13 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count = count + ft_putstr("-2");
		count = count + ft_putnbr(147483648);
		return (count);
	}
	if (n < 0)
	{
		count = count + ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		count = count + ft_putnbr(n / 10);
	count = count + ft_putchar((n % 10) + '0');
	return (count);
}

int	ft_putnbr_u(unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n >= 10)
		count = count + ft_putnbr_u(n / 10);
	count = count + ft_putchar((n % 10) + '0');
	return (count);
}
