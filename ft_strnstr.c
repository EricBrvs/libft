/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebervas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:20:32 by ebervas           #+#    #+#             */
/*   Updated: 2024/10/09 15:32:09 by ebervas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	comp;
	size_t	len_lit;

	len_lit = ft_strlen(little);
	comp = 1;
	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (*big && i < len)
	{
		if (*big == little[0])
			comp = ft_strncmp(big, little, len_lit);
		if (comp == 0)
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}
