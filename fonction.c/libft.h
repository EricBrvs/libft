/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebervas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 08:59:31 by ebervas           #+#    #+#             */
/*   Updated: 2024/10/08 09:56:21 by ebervas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

int	ft_isalpha(int c);
int	ft_isdigit(int num);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t len);
void ft_bzero;
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);
int ft_toupper (int c);
int ft_tolower(int c);
void	ft_strchr(char c, char *str);
int strncmp(const char *s1, const char *s2, size_t n);
char	*strrchr(const char *str, int c);
memchr;
memcmp;
strnstr;
int ft_atoi(char *str);

#endif
