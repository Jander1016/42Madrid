/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42Madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 09:36:19 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/01/28 13:24:33 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_haystack;
	size_t	len_needle;

	len_haystack = ft_strlen(haystack);
	len_needle = ft_strlen(needle);
	if (len_needle == 0)
		return ((char *)haystack);
	while (*haystack)
	{
		if (len_needle > len || len_needle > len_haystack)
			return (NULL);
		if (ft_memcmp(haystack, needle, len_needle) == 0)
		{
			return ((char *)haystack);
		}
		len--;
		haystack++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main() {
    char *s1 = "lorem ipsum dolor sit amet";
     char *s2 = "lorem";
     size_t max = 15;
     char *i2 = ft_strnstr(s1, s2, max);
      printf("Substring found at: %s\n", i2);

    return 0;
}*/
