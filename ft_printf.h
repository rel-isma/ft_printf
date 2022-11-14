/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-isma <rel-isma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:55:24 by rel-isma          #+#    #+#             */
/*   Updated: 2022/11/10 21:22:12 by rel-isma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putnumber(int n);
int	ft_putstring(char *s);
int	ft_putunsigned(unsigned int n);
int	ft_puthexdecimal(unsigned int n);
int	ft_puthexdecimal_m(unsigned int n);
int	ft_putadress(unsigned long long n);

#endif
