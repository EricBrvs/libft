#include <stdio.h>
int main() {
    char buffer[50] = "je suis un exemple de chevauchement";
    printf("%s\n", buffer);

    ft_memmove(buffer + 10, buffer + 4, 11);
    printf("%s\n", buffer);

    return (0);
}