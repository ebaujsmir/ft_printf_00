/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:31:59 by esmirnov          #+#    #+#             */
/*   Updated: 2022/01/13 13:33:27 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int nbr)
{
	int		len;
	char	*base_10;

	base_10 = "0123456789";
	len = 0;
	ft_putnbr_base(nbr, base_10);
	len = ft_nbr_size((long long)nbr, base_10);
	if (nbr < 0)
		len++;
	return (len);
}
