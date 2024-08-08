/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b < jgomez-b@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 01:04:44 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/07/08 04:41:02 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void	*ptr)
{
	int				len;
	unsigned long	nbr;

	len = 0;
	nbr = (unsigned long)ptr;
	if (!nbr)
		return (ft_putstr("(nil)"));
	len += ft_putstr("0x");
	len += ft_puthexadecimal(nbr, 0);
	return (len);
}
