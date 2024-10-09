#include "libft.h"

int ft_count_word(char *str, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while(str[i])
    {
        if(str[i] != c && (i == 0 || str[i - 1] == c))
            count++;
        i++;
    }
    return (count);
}

char *ft_create_word(char *str, char c)
{   
    char *word;
    int i;
    int len;

    len = 0;
    i = 0;
    while(str[len] && str[len] != c)
        len++;
    word = (char *)malloc(sizeof(char) * (len + 1));
    if(word == NULL)
        return(NULL);
    while(i < len)
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char **ft_split(char const *s, char c)
{
    char **array;
    int count;
    int i;

    i = 0;
    count = ft_count_word((char *)s, c);
    array = (char **)malloc(sizeof(char *) * (count + 1));
    if (array == NULL)
        return(NULL);
    while(*s)
    {
        while(*s && *s == c)
            s++;
        if(*s)
            array[i++] = ft_create_word((char *)s, c);
        while(*s && *s != c)
            s++;            
    }   
    array[i] = NULL;
    return (array);
}

#include <stdio.h>
int main(int ac, char **av) {
    if(ac == 2) {
        int i = 0;
        char c = ' ';
        char **tab = ft_split(av[1], c);
        while(tab[i])
            printf("%s\n", tab[i++]); 
    }
    return (0);
}