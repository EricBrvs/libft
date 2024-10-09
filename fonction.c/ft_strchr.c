/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebervas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 08:10:10 by ebervas           #+#    #+#             */
/*   Updated: 2024/10/09 08:16:30 by ebervas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strchr(char c, char *str)
{
	int	i;
	int	len;
	
	i = 0;
	len = ft_strelen(str);
	
	while (i <= len)
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (NULL);
}
