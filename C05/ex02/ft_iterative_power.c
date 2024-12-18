int ft_iterative_power(int nb, int power)
{
    int pow;

    pow = 1;
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    while (power--)
    {
        pow *= nb;
    }
    return (pow);
}
/*
#include <stdio.h>
int main()
{
    printf("%d\n", ft_iterative_power(0, -1));
}*/
