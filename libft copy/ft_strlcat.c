/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuriens <rjuriens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:34:42 by rjuriens          #+#    #+#             */
/*   Updated: 2022/10/31 12:59:58 by rjuriens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

int ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    int len;
    int srclen;
    int i;

    i = 0;
    len = ft_strlen(dst) + ft_strlen((char *)src);
    srclen = ft_strlen((char *)src);
    while (i < (int)dstsize + srclen - 1)
    {
        dst[srclen + i] = src[i];
        i++;
    }
    dst[srclen + i] = 0;
    return (len);
}