/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 05:05:46 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/03/11 03:49:26 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *s, char c)
{
	int		count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	*ft_strndup(const char *s, size_t n)
{
	char	*dup;
	size_t	i;

	dup = (char *)malloc(n + 1);
	if (dup)
	{
		i = 0;
		while (i < n)
		{
			dup[i] = s[i];
			i++;
		}
		dup[n] = '\0';
	}
	return (dup);
}

static void	ft_free_split(char **split)
{
	int		i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int	ft_split_words_and_allocate(const char *s, char c,
			char **result, int word_count)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] && k < word_count)
	{
		if (s[i] != c)
		{
			j = i;
			while (s[i] && s[i] != c)
				i++;
			result[k] = ft_strndup(s + j, i - j);
			if (!result[k])
				return (-1);
			k++;
		}
		else
			i++;
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	int		word_count;
	char	**result;

	word_count = ft_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	if (ft_split_words_and_allocate(s, c, result, word_count) != 0)
	{
		ft_free_split(result);
		return (NULL);
	}
	result[word_count] = NULL;
	return (result);
}

/*
#include <stdio.h>

// Include the refactored ft_split function and its dependencies here

int main() {
    const char *s = "hello world hola";
    char c = ' ';
    char **words = ft_split(s, c);
    
    if (words) {
        for (int i =  0; words[i] != NULL; i++) {
            printf("%s\n", words[i]);
        }
        // Remember to free the memory allocated by ft_split
        free_split(words);
    } else {
        printf("Memory allocation failed\n");
    }
    
    return  0;
}*/
