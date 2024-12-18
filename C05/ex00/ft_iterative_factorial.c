int ft_iterative_factorial(int nb)
{
    int i;

    i = 1;
    if (nb < 0)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    while (nb)
    {
        i *= nb;
        --nb;
    }
    return (i);
}
/*
#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_iterative_factorial(1));
}*/
