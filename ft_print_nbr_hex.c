/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:32:13 by esmirnov          #+#    #+#             */
/*   Updated: 2022/01/13 13:35:46 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr_hex(unsigned int n, const char *format)
{
	char	*base_hex_uppercase;
	char	*base_hex_lowcase;
	int		len;

	base_hex_uppercase = "0123456789ABCDEF";
	base_hex_lowcase = "0123456789abcdef";
	if (*format == 'x')
	{
		ft_putnbr_base((long long)n, base_hex_lowcase);
		len = ft_nbr_size((long long)n, base_hex_lowcase);
	}
	if (*format == 'X')
	{
		ft_putnbr_base((long long)n, base_hex_uppercase);
		len = ft_nbr_size((long long)n, base_hex_uppercase);
	}
	return (len);
}
