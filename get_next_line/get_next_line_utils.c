/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b < jgomez-b@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:13:06 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/08/08 10:26:49 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

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

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (char)c)
        s++;
	if (*s == (char)c)
		return ((char *)s);
    else
    	return (NULL);
}
