/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b < jgomez-b@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 09:55:46 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/09/18 23:42:19 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_and_store(int fd, char *store_line)
{
	char	*buffer;
	int		bytes_read;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(store_line, '\n') && bytes_read > 0)
	{
		bytes_read = (int)read(fd, buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
		{
			free(buffer);
			if (store_line)
				return (store_line);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		store_line = ft_strjoin(store_line, buffer);
	}
	free(buffer);
	return (store_line);
}

static int	get_line_len(char *store_line)
{
	int	i;

	i = 0;
	if (!store_line)
		return (0);
	while (store_line[i] && store_line[i] != '\n')
		i++;
	if (store_line[i] == '\n')
		return (i + 1);
	return (i);
}

static char	*extract_line(char *store_line)
{
	int		i;
	char	*line;
	int		line_len;

	if (!store_line)
		return (NULL);
	line_len = get_line_len(store_line);
	if (line_len == 0)
		return (NULL);
	line = malloc(sizeof(char) * line_len + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (store_line[i] != '\0' && store_line[i] != '\n')
	{
		line[i] = store_line[i];
		i++;
	}
	if (store_line[i] == '\n')
	{
		line[i] = store_line[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

static char	*update_store(char *store_line)
{
	int		i;
	int		new_index;
	char	*new_store;

	i = 0;
	while (store_line[i] && store_line[i] != '\n')
		i++;
	if (!store_line[i])
	{
		free(store_line);
		return (NULL);
	}
	new_store = malloc(sizeof(char) * (ft_strlen(store_line) - i + 1));
	if (!new_store)
		return (NULL);
	i++;
	new_index = 0;
	while (store_line[i])
		new_store[new_index++] = store_line[i++];
	new_store[new_index] = '\0';
	free(store_line);
	return (new_store);
}

char	*get_next_line(int fd)
{
	static char	*store_line = NULL;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	store_line = read_and_store(fd, store_line);
	if (!store_line)
		return (NULL);
	line = extract_line(store_line);
	store_line = update_store(store_line);
	return (line);
}
