#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main() {
    char src[] = "Hello, World!";
    char dest[10];

    ft_strncpy(dest, src, 6);

    printf("%s\n", dest);

    return 0;
}
