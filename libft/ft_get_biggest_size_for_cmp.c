/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_biggest_size_for_cmp.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilsdruon <nilsdruon@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:29:24 by nilsdruon         #+#    #+#             */
/*   Updated: 2026/06/29 15:42:59 by nilsdruon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_get_biggest_s(char    *s1, char   *s2)
{
    size_t s1_len;
    size_t s2_len;

    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    if(s1_len >= s2_len)
        return(s1_len);
    return(s2_len);
}