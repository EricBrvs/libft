/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebervas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 08:16:59 by ebervas           #+#    #+#             */
/*   Updated: 2024/10/09 15:50:25 by ebervas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if (c == '\0')
		return (((char *)str) + i);
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
			return (&((char *)str)[i]);
		i--;
	}
	return (NULL);
}
