/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eric <eric@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:28:13 by eric              #+#    #+#             */
/*   Updated: 2024/10/10 15:58:56 by eric             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *word;

    if(!s)
        NULL;

     if (start >= ft_strlen(s))
    {
        word = (char *)malloc(1);
        if (word == NULL)
            return (NULL);
        word[0] = '\0';
        return (word);
    }
    
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    word = (char *)malloc(sizeof(char) * (len + 1));
    if (word == NULL)
        return (NULL);
    i = 0;
    while(i < len && s[start + i] != '\0')
    {
        word[i] = s[start + i];
        i++;
    }
    word[i] = '\0';
    return (word);
}