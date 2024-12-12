char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    char    *buff;

    buff = dest;
    while (*buff)
    {
        ++buff;
    }
    while (*src && nb--)
    {
        *buff = *src;
        ++buff;
        ++src;
    }
    return (dest);
}
/*
#include <stdio.h>
int main()
{
    char dest[10] = "Hello";
    char src[] = "World";
    printf("%s\n", ft_strncat(dest, src, 3));
}*/
