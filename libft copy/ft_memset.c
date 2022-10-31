/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuriens <rjuriens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:48:44 by rjuriens          #+#    #+#             */
/*   Updated: 2022/10/27 15:07:42 by rjuriens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memset(void *b, int c, size_t len)
{
    size_t i;

    i = 0;
    if (!b)
        return (NULL);
    while (i < len)
    {
        *(unsigned char*)(b + i) = (unsigned char)c;
        i++;
    }
    return (b);
}