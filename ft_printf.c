/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:33:33 by esmirnov          #+#    #+#             */
/*   Updated: 2022/01/13 13:39:40 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		i;

	va_start(ap, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			count += ft_print_char(format[i]);
		else
		{
			i++;
			count += ft_format(ap, &format[i]);
		}
		i++;
	}
	va_end(ap);
	return (count);
}
