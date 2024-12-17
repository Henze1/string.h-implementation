#include <unistd.h>

void    ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str++, 1);
    }
}

#include <stdio.h>
int main(void)
{
    char str[10] = "Hello\n";
    ft_putstr(str);
    return (0);
}
