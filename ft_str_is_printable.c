int ft_str_is_printable(char *str)
{
    char *buff;

    buff = str;
    if (*buff == '\0') return (1);
    while (*buff)
    {
        if (*buff < 32 || *buff > 126)
            return (0);

        ++buff;
    }

    return (1);
}
