/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr_unsigned.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:32:32 by esmirnov          #+#    #+#             */
/*   Updated: 2022/01/13 13:37:23 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr_unsigned(unsigned int nbr)
{
	int		len;
	char	*base_10;

	base_10 = "0123456789";
	ft_putnbr_u_base(nbr, base_10);
	len = ft_nbr_size((long long)nbr, base_10);
	return (len);
}
