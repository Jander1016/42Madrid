/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b < jgomez-b@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:01:51 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/07/08 00:14:03 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthexadecimal(unsigned long nbr, int upper)
{
	int		len;
	char	*uppercase;
	char	*lowercase;

	len = 0;
	lowercase = "0123456789abcdef";
	uppercase = "0123456789ABCDEF";
	if (nbr >= 16)
		len += ft_puthexadecimal(nbr / 16, upper);
	if (upper == 1)
		len += ft_putchar(uppercase[nbr % 16]);
	else
		len += ft_putchar(lowercase[nbr % 16]);
	return (len);
}
