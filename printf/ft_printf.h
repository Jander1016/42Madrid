/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b < jgomez-b@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:43:17 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/07/08 02:46:29 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putptr(void	*ptr);
int	ft_putnbr_unsigned(unsigned long nbr);
int	ft_putnbr(long nbr);
int	ft_puthexadecimal(unsigned long nbr, int upper);
int	ft_converted_format(char format, va_list args);
int	ft_printf(const char *format, ...);

#endif
