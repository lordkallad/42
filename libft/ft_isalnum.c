/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuriens <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:19:27 by rjuriens          #+#    #+#             */
/*   Updated: 2022/10/27 14:20:25 by rjuriens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 
int ft_isalnum(int c)
{
    if (i >= 0 && i <= 9)
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))  
            return (1);
        else
            return (0);
    else return (0);
}