#include <unistd.h>

void print_hex(char);

void ft_putstr_non_printable(char *str)
{
    char *buff;

    buff = str;
    while(*buff)
    {
        if (*buff < 33 || *buff > 126)
            print_hex(*buff);
        else
            write(1, buff, 1);

        ++buff;
    }
    write(1, "\n", 1);
}

void print_hex(char c)
{
    char buff[3];

    buff[0] = '\\';

    if ((c >> 4) < 10)
        buff[1] = (c >> 4) + '0';
    else
        buff[1] = ((c >> 4) - 10) + 'a';

    if ((c & 0x0f) < 10)
        buff[2] = (c & 0x0f) + '0';
    else
        buff[2] = ((c & 0x0f) - 10) + 'a';

    write(1, buff, 3);
}
