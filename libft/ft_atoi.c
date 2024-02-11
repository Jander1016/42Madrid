/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42Madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:15:23 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/01/20 01:23:08 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	number = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	return (number * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char numPtr[23] = "    +0105 -123  040 ";

   printf( "Convirtiendo \"%s\" en un numero: %d\n", numPtr, ft_atoi(numPtr));
   printf( "Convirtiendo \"%s\" con atoi: %d\n", numPtr, atoi(numPtr) );

   return 0;
}*/
