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

int	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	j;
	int	dstlen;
	int	srclen;

	srclen = ft_strlen((char *)src);
	dstlen = ft_strlen(dst);
	i = 0;
	j = dstlen;
	if (dstlen < (int)dstsize && dstsize > 0)
	{
		while (dstlen + i < (int)dstsize - 1 && src[i])
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = 0;
	}
	if (dstlen >= (int)dstsize)
		dstlen = (int)dstsize;
	return (dstlen + srclen);
}
