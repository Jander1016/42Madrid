/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42Madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:44:59 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/01/28 19:06:20 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	char	*join;
	int		len_all;

	len_all = ft_strlen(s1) + ft_strlen(s2);
	dst = (char *)malloc(sizeof(char) * (len_all + 1));
	if (!dst)
		return (NULL);
	join = dst;
	*(dst + len_all) = '\0';
	while (*s1)
		*dst++ = *s1++;
	while (*s2)
		*dst++ = *s2++;
	return (join);
}
/*
 * #include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, ";
    char str2[] = "World!";
    printf("%s\n", ft_strjoin(str1, str2));
    return 0;
}*/
