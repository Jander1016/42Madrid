/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42Madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:02:52 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/01/25 18:43:44 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
 
int main()
{
   char cadena[] = "esto es una cadena de prueba zzz";
   int i;
   
   for(i = 0; cadena[i]; i++) 
      cadena[i] = ft_toupper(cadena[i]);

   printf("%s\n", cadena);
   return 0;
}*/
