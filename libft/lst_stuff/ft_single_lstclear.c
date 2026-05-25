/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_single_lstclear.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nildruon <nildruon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 15:38:21 by nildruon          #+#    #+#             */
/*   Updated: 2026/05/25 16:52:19 by nildruon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_single_lstclear(t_single_linked_node **lst, void (*del)(void*))
{
	t_single_linked_node	*curr;
	t_single_linked_node	*tmp;

	curr = *lst;
	while (curr)
	{
		tmp = curr;
		curr = curr->next;
		if(del)
			del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}