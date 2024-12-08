int ft_str_is_alpha(char *str)
{
    char *buff;

    buff = str;
    if (*buff == '\0') return (1);

    while (*buff)
    {
        if (*buff < 'A' || *buff > 'Z' && *buff < 'a' || *buff > 'z')
            return (0);

        ++buff;
    }

    return (1);
}
