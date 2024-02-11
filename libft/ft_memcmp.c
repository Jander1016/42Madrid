/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42Madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 08:52:28 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/01/28 09:31:35 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && *ptr1 == *ptr2)
	{
		i++;
		ptr1++;
		ptr2++;
	}
	return (*ptr1 - *ptr2);
}
/*
#include <stdio.h>
#include <string.h>
int main () {
    char *s1 = "atoms\0\0\0\0";
     char *s2 = "atoms\0abc";
     size_t size = 8;
     int i1 = memcmp(s1, s2, size);
     int i2 = ft_memcmp(s1, s2, size);


      printf("str2 is less than str1%d\n", i1);
      printf("str1 is less than str2%d\n",i2);


   return(0);
}*/
