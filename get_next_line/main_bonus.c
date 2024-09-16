/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b < jgomez-b@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 01:54:40 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/09/16 02:04:36 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>

#define GNL_CALL 10000
#define THEN_DIFF 1 

int	main(int ac, char **av)
{
	char			*line;
	int				fd1, fd2, fd3, i;

	(void)ac;
	fd1 = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_RDONLY);
	fd3 = open(av[3], O_RDONLY);
	
	i = 0;
	while (i++ < GNL_CALL)
	{
		line = get_next_line(fd1);
		if (!line)
			break ;
		printf("fd: %i-->%s\n", fd1, line);
		free(line);
	}
	close(fd1);
	i = 0;
	while (i++ < GNL_CALL)
	{
		line = get_next_line(fd2);
		if (!line)
			break ;
		printf("fd: %i-->%s\n", fd2, line);
		free(line);
	}
	close(fd2);
	i = 0;
	while (i++ < GNL_CALL)
	{
		line = get_next_line(fd3);
		if (!line)
			break ;
		printf("fd: %i-->%s\n", fd3, line);
		free(line);
	}
	close(fd3);
	return (0);
}
