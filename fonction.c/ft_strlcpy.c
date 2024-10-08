
#include "libft.h"
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    if(size == 0)
        return (strlen(src));

    i = 0;
    while(i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (strlen(src));
}

#include <stdio.h>
int main()
{
    char dest[36] = "je suis entrain de tester mon code";
    const char source[] = "espece de pd";

    ft_strlcpy(dest, source, 50);
    printf("%s", dest);

    return (0);
}
