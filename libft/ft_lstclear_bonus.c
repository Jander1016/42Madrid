/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-b <jgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 20:26:53 by jgomez-b          #+#    #+#             */
/*   Updated: 2024/03/15 00:38:58 by jgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node_aux;

	if (!*lst || !lst || !del)
		return ;
	while (*lst)
	{
		node_aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node_aux;
	}
}
