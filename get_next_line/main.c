/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b < jgomez-b@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:08:39 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/09/16 00:30:38 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

#define GNL_CALL 10000
#define THEN_DIFF 1 

int	main(int ac, char **av)
{
	char			*line;
	int				fd;
	int				i;

	(void)ac;
	fd = open(av[1], O_RDONLY);
	if (!fd)
		return (1);
	i = 0;
	while (i++ < GNL_CALL)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		if (THEN_DIFF)
			printf("line: %i--->%s\n", i, line);
		else
			printf("line [%02d]: %s\n", i, line);
		free(line);
	}
	close(fd);
	return (0);
}
