/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjuriens <rjuriens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:04:37 by rjuriens          #+#    #+#             */
/*   Updated: 2022/10/31 12:54:09 by rjuriens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>

int             ft_atoi(const char *str);
void            ft_bzero(void *s, size_t n);
int             ft_isalnum(int c);
unsigned int    ft_isalpha(char c);
int             ft_isascii(int c);
int             ft_isdigit(int i);
int             ft_isprint(int c);
void            *ft_memchr(const void *s, int c, size_t n);
int             ft_memcmp(const void *s1, const void *s2, size_t n);
void            *ft_memcpy(void *dst, const void *src, size_t len);
void            *ft_memset(void *b, int c, size_t len);
char            *ft_strchr(const char *s, int c);
int             ft_strlcat(char *dst, const char *src, size_t dstsize);
int             ft_strlcpy(char *dst, const char *src, size_t dstsize);
int             ft_strlen(char *str);
int	            ft_strncmp(char *s1, char *s2, unsigned int n);
char	        *ft_strnstr(char *str, char *to_find, size_t len);
char            *ft_strrchr(char *s, int c);
int             ft_tolower(int c);
int             ft_toupper(int c);

#endif
