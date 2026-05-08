/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loop_dbl_lstadd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nildruon <nildruon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 18:35:38 by nildruon          #+#    #+#             */
/*   Updated: 2026/05/07 15:33:21 by nildruon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//this func is for doubly linked list that are defo looped
void	ft_loop_dbl_lstadd(t_double_linked_node **lst,
			t_double_linked_node *new_node)
{
	new_node->next = *lst;
	new_node->prev = (*lst)->prev;
	(*lst)->prev->next = new_node;
	(*lst)->prev = new_node;
}
