/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42Madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:38:49 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/01/28 15:49:34 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*copy;
	char	*start;

	len = ft_strlen(s1);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	start = copy;
	while (*s1)
		*copy++ = *s1++;
	*copy = '\0';
	return (start);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char source[] = "Hola, Mundo!";
    // Se crea una copia dinámica de source
    // y se devuelve un puntero a la copia.
    char *target = ft_strdup(source);
    printf("%s\n", target);
    free(target); // No olvides liberar la memoria
    return 0;
}*/
