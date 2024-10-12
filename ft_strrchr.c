/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebervas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 08:16:59 by ebervas           #+#    #+#             */
/*   Updated: 2024/10/12 09:02:49 by ebervas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if (c == '\0')
		return (((char *)str) + i);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (&((char *)str)[i]);
		i--;
	}
	if (str[0] == (char)c)
		return ((char *)str);
	return (NULL);
}
