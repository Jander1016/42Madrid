/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42Madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:30:51 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/01/20 22:04:35 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main () {
   int var1 = 'k';
   int var2 = '8';
   int var3 = '\t';
   int var4 = ' ';

   if( ft_isprint(var1) ) {
      printf("var1 = |%c| can be printed\n", var1 );
   } else {
      printf("var1 = |%c| can't be printed\n", var1 );
   }

   if( ft_isprint(var2) ) {
      printf("var2 = |%c| can be printed\n", var2 );
   } else {
      printf("var2 = |%c| can't be printed\n", var2 );
   }

   if( ft_isprint(var3) ) {
      printf("var3 = |%c| can be printed\n", var3 );
   } else {
      printf("var3 = |%c| can't be printed\n", var3 );
   }

   if( ft_isprint(var4) ) {
      printf("var4 = |%c| can be printed\n", var4 );
   } else {
      printf("var4 = |%c| can't be printed\n", var4 );
   }

   return(0);
}*/
