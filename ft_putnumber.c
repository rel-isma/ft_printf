/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:16:17 by rel-isma          #+#    #+#             */
/*   Updated: 2022/11/10 21:28:38 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnumber(int n)
{
	int	i;

	i = 0;
	if (n == (-2147483648))
		return (ft_putstring("-2147483648"));
	else if (n < 0)
	{
		i += ft_putchar('-');
		n = n * (-1);
		i += ft_putnumber(n);
	}
	else if (n > 9)
	{
		i += ft_putnumber(n / 10);
		i += ft_putnumber(n % 10);
	}
	else
		i += ft_putchar(n + 48);
	return (i);
}
