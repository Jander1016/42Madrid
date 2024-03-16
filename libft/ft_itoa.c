/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 07:28:36 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/03/11 03:49:24 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_len(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		++count;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		num;

	num = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_count_len(n);
	if (n < 0)
	{
		num *= -1;
		size++;
	}
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == 0)
		return (0);
	*(str + size) = '\0';
	while (size--)
	{
		*(str + size) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;

	n = -2147483648;
	printf("%s", ft_itoa(n));
	return (0);
}
*/
