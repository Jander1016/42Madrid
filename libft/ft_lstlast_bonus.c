/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 04:40:57 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/03/15 00:38:45 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
//Devuelve el ultimo nodo de la lista.
int	main(void)
{
	t_list	*node1 = ft_lstnew("Nodo 1");
	t_list	*node2 = ft_lstnew("Nodo 2");
	t_list	*node3 = ft_lstnew("Nodo 3");

	ft_lstadd_front(&node2, node1);
	ft_lstadd_front(&node3, node2);

	t_list	*lastNode = ft_lstlast(node3);

	printf("Ultimo nodo de la lista: %s\n", (char *)(lastNode->content));
	return (0);
}*/