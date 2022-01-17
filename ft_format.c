/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:31:11 by esmirnov          #+#    #+#             */
/*   Updated: 2022/01/12 19:37:10 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list ap, const char *format)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	if (format[i] == 'd' || format[i] == 'i')
		len += ft_print_nbr(va_arg(ap, int));
	else if (format[i] == 'u')
		len += ft_print_nbr_unsigned(va_arg(ap, unsigned int));
	else if (format[i] == '%')
	{
		write(1, "%", 1);
		len++;
	}
	else if (format[i] == 'c')
		len += ft_print_char(va_arg(ap, int));
	else if (format[i] == 's')
		len += ft_print_string(va_arg(ap, char *));
	else if (format[i] == 'x' || format[i] == 'X')
		len += ft_print_nbr_hex(va_arg(ap, unsigned int), format);
	else if (format[i] == 'p')
		len += ft_print_ptr(va_arg(ap, unsigned long long));
	return (len);
}
