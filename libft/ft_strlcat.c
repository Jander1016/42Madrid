/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42Madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 06:35:35 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/01/28 06:35:47 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	aux_src;

	len_dst = ft_strlen(dst);
	aux_src = ft_strlen(src);
	if (dstsize <= len_dst)
		aux_src += dstsize;
	else
		aux_src += len_dst;
	len_src = 0;
	while (src[len_src] && len_dst + 1 < dstsize)
	{
		dst[len_dst] = src[len_src];
		len_dst++;
		len_src++;
	}
	dst[len_dst] = 0;
	return (aux_src);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char dest[30]; 
    memset(dest, 0, 30);
    char *src = (char *)"AAAAAAAAA";
    memset(dest, 'C', 5);
    int res = ft_strlcat(dest, src, sizeOf(dest);
    printf("Concatenated string: %s\n", dest);
    printf("tamaño de buffer: %d\n", res);

    return 0;
}*/
