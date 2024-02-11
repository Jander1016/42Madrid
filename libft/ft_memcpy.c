/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42Madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 01:26:19 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/01/28 02:33:10 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*destine;
	const char	*source;

	if (!dst && !src)
		return (NULL);
	destine = dst;
	source = src;
	while (n--)
	{
		*destine++ = *source++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
#include <stddef.h>

int main() {
   char str1[] = "Geeks";
   char str2[] = "Quiz";
   puts("str1 antes de memcpy");
   puts(str1);
   // Copia los contenidos de str2 a str1
   ft_memcpy(str1, str2, sizeof(str2));
   puts("\nstr1 después de memcpy");
   puts(str1);
   return 0;
}*/
