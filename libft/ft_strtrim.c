/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:15:45 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/03/11 03:48:11 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	left;
	size_t	right;

	if (!s1 || !set)
		return (NULL);
	left = 0;
	right = ft_strlen(s1);
	while (s1[left] != '\0' && ft_strchr(set, s1[left]) != 0)
		left++;
	while (right > left && ft_strchr(set, s1[right - 1]) != 0)
		right--;
	str = ft_substr(s1, left, right - left);
	return (str);
}
/*
int main() {
    char str1[] = " \t\t Welcome to the Jungle \t ";
	char set1[]= " \t";
	char *trimmed1 = ft_strtrim(str1, set1);

	printf("%s\n", trimmed1);
	return 0;
}*/
