/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:32:46 by esmirnov          #+#    #+#             */
/*   Updated: 2022/01/13 13:38:16 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long long ptr)
{
	int			len;
	char		*base_hex_lowcase;

	base_hex_lowcase = "0123456789abcdef";
	ft_putchar('0');
	ft_putchar('x');
	ft_putnbr_u_base(ptr, base_hex_lowcase);
	len = ft_nbr_u_size(ptr, base_hex_lowcase);
	len += 2;
	return (len);
}
