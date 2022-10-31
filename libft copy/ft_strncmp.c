/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuriens <rjuriens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:00:56 by rjuriens          #+#    #+#             */
/*   Updated: 2022/10/31 12:57:03 by rjuriens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		else if (s1[i] == '\0' || i == (n - 1))
		{
			return (0);
		}
		i++;
	}
	return (0);
}