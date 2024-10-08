#include <stdio.h>
int main()
{
    char dest[36] = "je suis entrain de tester mon code";
    const char source[] = "espece de pd";

    ft_strlcpy(dest, source, 50);
    printf("%s", dest);

    return (0);
}