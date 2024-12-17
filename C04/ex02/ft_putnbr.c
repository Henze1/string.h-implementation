#include <unistd.h>

void    ft_putnbr(int nb)
{
    int     num;
    int     rev;
    char    c;

    num = nb;
    rev = 0;
    while (num)
    {
        rev *= 10;
        rev += num % 10;
        num /= 10;
    }
    while (rev)
    {
        c = (rev % 10) + '0';
        write(1, &c, 1);
        rev /= 10;
    }
}
/*
#include <stdio.h>
int main(void)
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    ft_putnbr(a);
    return (0);
}*/
