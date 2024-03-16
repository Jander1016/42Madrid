/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:01:10 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/03/15 00:38:49 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = (lst)->next;
	}
}
/*
static void	f(void *content)
{
	printf("content: %s\n", (char *)content);
}

//itera en la lista.
//Aplica la funcion 'f' en el contenido de cada nodo.
int	main(void)
{
	t_list	*node1 = ft_lstnew("Hello");
	t_list	*node2 = ft_lstnew("World");

	ft_lstadd_back(&node1, node2);
	ft_lstiter(node1, f);
}*/