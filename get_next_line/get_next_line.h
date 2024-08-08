/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b < jgomez-b@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 10:20:25 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/08/08 11:56:02 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_list_node
{
    char    *buffer;
    struct s_list_node *next;
} t_list_node;

char    *get_next_line(int fd);

#endif