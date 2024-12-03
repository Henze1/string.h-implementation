char *ft_strupcase(char *str)
{
    char *buff;

    buff = str;
    while (*buff)
    {
        if (*buff >= 'A' && *buff <= 'Z')
            *buff += 32;

        ++buff;
    }

    return str;
}
