/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuriens <rjuriens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:23:47 by rjuriens          #+#    #+#             */
/*   Updated: 2022/10/31 13:39:50 by rjuriens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libc.h>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    printf("ft_atoi : %d\natoi : %d", ft_atoi(argv[1]), atoi(argv[1]));

}