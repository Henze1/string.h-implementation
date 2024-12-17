char *ft_strstr(char *str, char *to_find) {
    char    *h_start;
    char    *n;
    char    *h;


    if (!*to_find)
        return (str);
    h = str;
    while (*h) {
        h_start = h;
        n = to_find;
        while (*h_start && *n && *h_start == *n) {
            ++h_start;
            ++n;
        }
        if (!*n)
            return (h);
        ++h;
    }
    return "\0";
}
/*
#include <stdio.h>
int main()
{
    char str[] = "hellohibye";
    char to_find[] = "ho";
    printf("%s\n", ft_strstr(str, to_find));
}*/
