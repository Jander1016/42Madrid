/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b < jgomez-b@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:13:06 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/09/16 00:40:03 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*new;
	int		len_all;

	i = 0;
	j = 0;
	len_all = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (len_all + 1));
	if (!new)
		return (NULL);
	if (s1)
	{
		while (s1[j] != '\0')
			new[i++] = s1[j++];
	}
	j = 0;
	if (s2)
	{
		while (s2[j] != '\0')
			new[i++] = s2[j++];
	}
	new[i] = '\0';
	free(s1);
	return (new);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != '\0' && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}
