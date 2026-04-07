/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 23:00:00 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/03/15 23:44:49 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char s);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putnbr_u(unsigned int n);
int	ft_putnbr_hex(unsigned long n);
int	ft_putnbr_hex_up(unsigned long n);
int	ft_putptr(unsigned long n);
int	detect_and_write(va_list *ap, const char s);
int	ft_printf(const char *s, ...);

#endif
