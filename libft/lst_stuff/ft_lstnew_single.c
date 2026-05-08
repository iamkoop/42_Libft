/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_single_lstnew.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nildruon <nildruon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:27:09 by nilsdruon         #+#    #+#             */
/*   Updated: 2026/05/07 15:02:20 by nildruon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_single_linked_node	*ft_single_lstnew(void *content)
{
	t_single_linked_node	*new;

	new = malloc(sizeof(t_single_linked_node));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*#include <stdio.h>
int	main(void)
{
		t_list *head;
		t_list *new = ft_lstnew("H");
		t_list *new2 = ft_lstnew("E");
		t_list *newtest;
		head=new;
		new->next=new2;
		new2->next=NULL;
		newtest = head;
		while (newtest)
		{
				printf("%s", (char *)newtest->content);
				newtest=newtest->next;
		}
		return(0);
} */
