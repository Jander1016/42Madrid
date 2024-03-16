/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 04:21:48 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/03/15 00:38:30 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
/*
//Cueta el numero de Nodos de una lista.
int	main(void)
{
	t_list	*ls = ft_lstnew("longitud de la lista");
	t_list	*new = ft_lstnew("Nuevo Nodo");
	ft_lstadd_front(&ls, new);
	int	size = ft_lstsize(ls);
	printf("La longitus es: %d\n", size);
	return (0);
}*/