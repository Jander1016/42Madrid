/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42Madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 22:21:10 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/01/20 22:16:24 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n-- > 0)
		*ptr++ = 0;
}
/*
#include <stdio.h>
#include <string.h>
#include <strings.h>

int main() {
   char password[50];

   strcpy(password, "secret");
   printf("Password: %s\n", password);

   ft_bzero(password, sizeof(password));

   printf("Password: %s\n", password);

   return 0;
}*/
