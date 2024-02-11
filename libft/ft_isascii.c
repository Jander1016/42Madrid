/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42Madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 01:07:39 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/01/20 01:21:41 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
   char cadena[] = ";0ñsáR(h&~?RÛ1/";
   int i;

   for(i = 0; cadena[i]; i++){
	   printf("%c, %d\n", cadena[i], isascii(cadena[i]));
	   printf("%c, %d\n", cadena[i], ft_isascii(cadena[i]));
			 }
   return 0;
}*/
