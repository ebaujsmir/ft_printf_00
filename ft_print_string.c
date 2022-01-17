/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:33:21 by esmirnov          #+#    #+#             */
/*   Updated: 2022/01/13 13:39:09 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int		len;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	ft_putstr(str);
	len = ft_strlen(str);
	return (len);
}
