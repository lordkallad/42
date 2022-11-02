/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuriens <rjuriens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:22:19 by rjuriens          #+#    #+#             */
/*   Updated: 2022/10/31 13:02:18 by rjuriens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

int ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    int i;

    i = 0;
    while (i < (int)dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = 0;
    return (ft_strlen((char *)src));
}