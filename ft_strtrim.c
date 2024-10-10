/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebervas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:23:38 by ebervas           #+#    #+#             */
/*   Updated: 2024/10/10 12:48:05 by ebervas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		flag;
	char	*res;

	k = 0;
	i = 0;
	j = 0;
	count = 0;
	flag = 0;
	len_set = ft_strlen(set);
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j])
				count++;
			j++;
		}
		i++;
	}
	res = malloc(sizeof(char) * (ft_strlen(s1) - count + 1));
	if (res == NULL)
		return (NULL);
	while (s1[i])
	{
		while (j < len_set)
		{
			if (s1[i] == set[j])
				flag = 1;
			j++;
		}
		if (!flag)
			res[k++] = s1[i];
		flag = 0;
		i++;
	}
	res[k] = '\0';
	return (res);
}
