/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 18:18:13 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/03/15 23:44:38 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	detect_and_write(va_list *ap, const char s)
{
	if (s == '%')
		return (ft_putchar('%'));
	if (s == 'c')
		return (ft_putchar(va_arg(*ap, int)));
	if (s == 's')
		return (ft_putstr(va_arg(*ap, char *)));
	if (s == 'p')
		return (ft_putptr((unsigned long)va_arg(*ap, void *)));
	if (s == 'd')
		return (ft_putnbr(va_arg(*ap, int)));
	if (s == 'i')
		return (ft_putnbr(va_arg(*ap, int)));
	if (s == 'u')
		return ((int)ft_putnbr_u(va_arg(*ap, unsigned int)));
	if (s == 'x')
		return (ft_putnbr_hex((unsigned long)va_arg(*ap, unsigned int)));
	if (s == 'X')
		return (ft_putnbr_hex_up((unsigned long)va_arg(*ap, unsigned int)));
	return (ft_putchar('%') + ft_putchar(s));
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		count;

	if (!s)
		return (-1);
	count = 0;
	va_start(ap, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (!*s)
				break ;
			count = count + detect_and_write(&ap, *s);
		}
		else
			count = count + ft_putchar(*s);
		s++;
	}
	va_end(ap);
	return (count);
}
