/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:34:33 by esmirnov          #+#    #+#             */
/*   Updated: 2022/01/13 13:53:18 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(long long nbr, char *base)
{
	int			base_size;
	long long	n;

	if (ft_check_base(base) == 1)
	{
		if (nbr < 0)
		{
			n = nbr * (-1);
			ft_putchar('-');
		}
		else
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
