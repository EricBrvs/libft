/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eric <eric@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:00:06 by ebervas           #+#    #+#             */
/*   Updated: 2024/10/10 16:22:48 by eric             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_word(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

char	*ft_create_word(char *str, char c)
{
	char	*word;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (str[len] && str[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void ft_free_split(char **array, int i)
{
	while(i >= 0)
		free(array[i--]);
	free(array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		count;
	int		i;

	i = 0;
	count = ft_count_word((char *)s, c);
	array = (char **)malloc(sizeof(char *) * (count + 1));
	if (array == NULL)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			array[i] = ft_create_word((char *)s, c);
			if(array[i] == NULL)
			{
				ft_free_split(array, i);
				return (NULL);
			}
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	array[i] = NULL;
	return (array);
}
