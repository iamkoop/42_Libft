/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nildruon <nildruon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 12:48:04 by nilsdruon         #+#    #+#             */
/*   Updated: 2026/08/23 16:35:47 by nildruon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_the_split(char **data)
{
	int	i;

	i = 0;
	if (!data)
		return ;
	while (data[i])
	{
		free(data[i]);
		i++;
	}
	free(data);
}
