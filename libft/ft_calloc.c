/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42Madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:29:59 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/01/28 14:36:54 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*memory;

	total_size = count * size;
	memory = malloc(total_size);
	if (memory == NULL)
		return (NULL);
	ft_memset(memory, 0, total_size);
	return (memory);
}
/*
int main(void)
{
   long *buffer;

   buffer = (long *)calloc(40, sizeof(long));
   if(buffer != NULL)
      printf("Allocated 40 long integers\n");
   else
      printf("Can't allocate memory\n");

   free(buffer);
   return 0;
}*/
