/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:53:48 by rel-isma          #+#    #+#             */
/*   Updated: 2022/11/10 21:28:11 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 9)
	{
		i += ft_putnumber(n / 10);
		i += ft_putnumber(n % 10);
	}
	else
		i += ft_putchar(n + 48);
	return (i);
}
