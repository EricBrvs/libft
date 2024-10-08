#include <stdio.h>
    #include <string.h>
    int main() {
        const char source[] = "ola quetal hijo des pinto";
        char dst[35];

        ft_memcpy(dst, source, strlen(source) + 1);

        printf("%s\n", source);
        printf("%s\n", dst);

        return (0); 
    }