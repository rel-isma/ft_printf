/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexdecimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:37:44 by rel-isma          #+#    #+#             */
/*   Updated: 2022/11/10 21:31:23 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexdecimal(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i += ft_puthexdecimal(n / 16);
		i += ft_puthexdecimal(n % 16);
	}
	else if (n <= 9)
		i += ft_putchar(n + 48);
	else if (n <= 15)
		i += ft_putchar(n + 87);
	return (i);
}
