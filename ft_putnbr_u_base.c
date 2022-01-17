/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 13:54:04 by esmirnov          #+#    #+#             */
/*   Updated: 2022/01/13 13:54:10 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u_base(unsigned long long nbr, char *base)
{
	unsigned int			base_size;
	unsigned long long		n;

	if (ft_check_base(base) == 1)
	{
		n = nbr;
		base_size = ft_strlen(base);
		while (n > base_size - 1)
		{
			ft_putnbr_base(n / base_size, base);
			n = n % base_size;
		}
		ft_putchar(base[n]);
	}
}
