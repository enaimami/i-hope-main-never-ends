/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 06:21:33 by mdisbuda          #+#    #+#             */
/*   Updated: 2026/01/29 08:21:34 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0x00;
	sign = 0x01;
	result = 0x00;
	while (str[i] == ' ' || (str[i] >= 0x09 && str[i] <= 0x0D))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 0x0A + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
