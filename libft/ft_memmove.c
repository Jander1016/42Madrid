/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42Madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 03:09:13 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/01/28 02:33:26 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_ptr;
	char const	*src_ptr;

	if (!dst && !src)
		return (NULL);
	dst_ptr = (char *) dst;
	src_ptr = (const char *)src;
	if (dst_ptr <= src_ptr)
	{
		while (len--)
			*dst_ptr++ = *src_ptr++;
	}
	else
	{
		dst_ptr += len;
		src_ptr += len;
		while (len--)
			*--dst_ptr = *--src_ptr;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

void print_array(char* arr, size_t len) {
    for (size_t i = 0; i < len; ++i) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

int main2() {
    char src[20] = "Hello, World!";
    char dst[20] = "";

    printf("Antes de ft_memmove:\n");
    print_array(dst, sizeof(dst));

    ft_memmove(dst, src, sizeof(src));

    printf("\nDespués de ft_memmove:\n");
    print_array(dst, sizeof(dst));

    return 0;
}

int main() {
    char str[20] = "Hola Mundo!";
    char str2[20] = "Hola Mundo!";

    ft_memmove(str + 5, str, strlen(str));
    memmove(str2 + 5, str2, strlen(str2));

    printf("Cadena modificada: %s\n", str);
    printf("Cadena modificada: %s\n", str2);

    return 0;
}*/
