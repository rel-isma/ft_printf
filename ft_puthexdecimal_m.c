
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexdecimal_m.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:10:58 by rel-isma          #+#    #+#             */
/*   Updated: 2022/11/10 17:10:59 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexdecimal_m(unsigned int n)
{
	int i = 0;

	if (n >= 16)
	{
		i += ft_puthexdecimal_m(n / 16);
		i += ft_puthexdecimal_m(n % 16);
	}
	else if (n <= 9)
		i += ft_putchar(n + 48);
	else if (n <= 15)
		i += ft_putchar(n + 55);
	return (i);
}
