/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b < jgomez-b@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:48:43 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/07/08 00:02:01 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned long nbr)
{
	int		len;
	char	cnbr;

	len = 0;
	cnbr = '\0';
	if (nbr >= 10)
		len += ft_putnbr_unsigned(nbr / 10);
	cnbr += (nbr % 10) + '0';
	len += ft_putchar(cnbr);
	return (len);
}
