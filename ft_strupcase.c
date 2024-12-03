char *ft_strupcase(char *str)
{
    char *buff;

    buff = str;
    while (*buff)
    {
        if (*buff >= 'a' && *buff <= 'z')
            *buff -= 32;

        ++buff;
    }

    return str;
}
