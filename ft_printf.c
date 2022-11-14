/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:54:34 by rel-isma          #+#    #+#             */
/*   Updated: 2022/11/11 20:12:50 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(va_list arg_ra, const char format, int *i)
{
	int	ft_len;

	ft_len = 0;
	if (format == 'c')
		ft_len += ft_putchar((va_arg(arg_ra, int)));
	else if (format == 's')
		ft_len += ft_putstring(va_arg(arg_ra, char *));
	else if (format == 'i' || format == 'd')
		ft_len += ft_putnumber(va_arg(arg_ra, int));
	else if (format == 'u')
		ft_len += ft_putunsigned(va_arg(arg_ra, unsigned int));
	else if (format == 'x')
		ft_len += ft_puthexdecimal(va_arg(arg_ra, unsigned int));
	else if (format == 'X')
		ft_len += ft_puthexdecimal_m(va_arg(arg_ra, unsigned int));
	else if (format == '%')
		ft_len += ft_putchar('%');
	else if (format == 'p')
	{
		ft_len += ft_putstring("0x");
		ft_len += ft_putadress(va_arg(arg_ra, unsigned long long));
	}
	else
		(*i)--;
	return (ft_len);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg_ra;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(arg_ra, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			len += ft_check(arg_ra, format[++i], &i);
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(arg_ra);
	return (len);
}
