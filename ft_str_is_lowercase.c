int ft_str_is_lowercase(char *str)
{
    char *buff;

    buff = str;
    if (*buff == '\0') return (1);
    while (*buff)
    {
        if (*buff < 'a' || *buff > 'z')
            return (0);

        ++buff;
    }

    return (1);
}
