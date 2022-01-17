/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_u_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 13:31:38 by esmirnov          #+#    #+#             */
/*   Updated: 2022/01/13 13:32:02 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbr_u_size(unsigned long long nbr, char *base)
{
	int						nbr_size;
	unsigned int			base_size;
	unsigned long long		n;

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
