int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    while ((*s1 || *s2) && n--)
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
    printf("%d\n", ft_strncmp(s1, s2, 4));
}*/
