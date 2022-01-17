/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:33:47 by esmirnov          #+#    #+#             */
/*   Updated: 2022/01/13 13:41:37 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_format(va_list ap, const char *format);
int		ft_print_char(char c);
int		ft_print_nbr(int nbr);
int		ft_print_nbr_unsigned(unsigned int nbr);
int		ft_print_ptr(unsigned long long ptr);
void	ft_putnbr(long long nb);
void	ft_putchar(char c);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *s);
int		ft_print_string(char *s);
int		ft_print_nbr_hex(unsigned int n, const char *format);
void	ft_putnbr_base(long long nbr, char *base);
void	ft_putnbr_u_base(unsigned long long nbr, char *base);
int		ft_nbr_size(long long nbr, char *base);
int		ft_nbr_u_size(unsigned long long nbr, char *base);
void	ft_putnbr(long long nb);
int		ft_check_base(char *base);

#endif
