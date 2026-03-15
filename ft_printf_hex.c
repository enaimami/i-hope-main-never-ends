/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 23:00:00 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/03/15 23:44:17 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned long n)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_putnbr_hex(n / 16);
	count += ft_putchar(base[n % 16]);
	return (count);
}

int	ft_putnbr_hex_up(unsigned long n)
{
	char	*base;
	int		count;

	base = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count += ft_putnbr_hex_up(n / 16);
	count += ft_putchar(base[n % 16]);
	return (count);
}
