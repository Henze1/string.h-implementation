int ft_strcmp(char *s1, char *s2)
{
    while (*s1 || *s2)
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
        ++s1;
        ++s2;
    }
    return (0);
}
/*
#include <stdio.h>
int main()
{
    char s1[] = "Hello";
    char s2[] = "Hello";
    printf("%d\n", ft_strcmp(s1, s2));
}*/
