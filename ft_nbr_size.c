/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:31:25 by esmirnov          #+#    #+#             */
/*   Updated: 2022/01/13 11:02:53 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbr_size(long long nbr, char *base)
{
	int			nbr_size;
	int			base_size;
	long long	n;

	nbr_size = 0;
	n = nbr;
	base_size = ft_strlen(base);
	if (n == 0)
		nbr_size = 1;
	else
	{
		while (n != 0)
		{
			n = n / base_size;
			nbr_size++;
		}
	}
	return (nbr_size);
}
