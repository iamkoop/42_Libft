/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nildruon <nildruon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:33:43 by nilsdruon         #+#    #+#             */
/*   Updated: 2026/05/25 15:50:24 by nildruon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_looped_lstclear(t_double_linked_node **lst)
{
	t_double_linked_node	*first;
	t_double_linked_node	*nxt;
	t_double_linked_node	*curr;

	first = *lst;
	curr = *lst;
	while (curr)
	{
		nxt = curr->next;
		free(curr);
		if (nxt == first)
			break ;
		curr = nxt;
	}
	*lst = NULL;
}
/* #include <stdio.h>
#include <string.h>

void	del(void *content)
{
	printf("Deleting content: %s\n", (char *)content);
	free(content);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list *lst = NULL;

	ft_lstadd_back(&lst, ft_lstnew(strdup("Hello")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("42")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("Vienna")));

	printf("List before ft_lstclear:\n");
	print_list(lst);

	ft_lstclear(&lst, del);

	printf("\nList after ft_lstclear:\n");
	if (lst == NULL)
		printf("lst is NULL ✅\n");
	else
		printf("lst is NOT NULL ❌\n");

	return (0);
} */
