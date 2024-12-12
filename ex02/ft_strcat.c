char *ft_strcat(char *dest, char *src)
{
    char    *buff;

    buff = dest;
    while (*buff)
    {
        ++buff;
    }
    while (*src)
    {
        *buff = *src;
        ++buff;
        ++src;
    }
    *buff = '\0';
    return (dest);
}
/*
#include <stdio.h>
int main()
{
    char dest[20] = "Hello, ";
    char src[] = "World!";
    printf("%s\n", ft_strcat(dest, src));
}*/
