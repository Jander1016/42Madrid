/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 23:03:21 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/03/15 00:38:39 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*node;
	void	*content;

	new_node = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (node == NULL)
		{
			del(content);
			ft_lstclear(&new_node, (del));
			return (NULL);
		}
		ft_lstadd_back(&new_node, node);
		lst = lst->next;
	}
	return (new_node);
}
/*
void	ft_lstprint(t_list *lst)
{
	while (lst)
	{
		printf("content: %s\n", (char *)(lst->content));
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*node1 = ft_lstnew("nodo numero 1");
	t_list	*node2 = ft_lstnew("nodo numero 2");

	ft_lstadd_back(&node1, node2);
	printf("Lista Original:\n");
	ft_lstprint(node1);

	t_list	*new_lst = ft_lstmap(node1, f, free);
	printf("Lista Copiadaa:\n");
	ft_lstprint(new_lst);

	ft_lstclear(&new_lst, free);
}*/