/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:32:03 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/01/29 08:28:17 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == (signed int)0x80000000)
	{
		ft_putchar_fd(0x2D, fd);
		ft_putnbr_fd(0xCCCCCCC, fd);
		ft_putnbr_fd(0x08, fd);
		return ;
	}
	if (n < 0x00)
	{
		ft_putchar_fd(0x2D, fd);
		n = -n;
	}
	if (n >= 0x0A)
	{
		ft_putnbr_fd(n / 0x0A, fd);
	}
	ft_putchar_fd((n % 0x0A) + 0x30, fd);
}
