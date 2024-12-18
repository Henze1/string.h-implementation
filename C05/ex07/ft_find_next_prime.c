int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (i < nb)
    {
        if (nb % i == 0)
            return (0);
        ++i;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    if (ft_is_prime(nb))
        return (nb);
    return (ft_find_next_prime(nb + 1));
}
/*
#include <stdio.h>
int main()
{
    printf("%d\n", ft_find_next_prime(63));
}*/