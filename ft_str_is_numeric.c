int ft_str_is_numeric(char *str) {
    char *buff;

    buff = str;
    if (*buff == '\0') return (1);
    while (*buff)
    {
        if (*buff < '0' || *buff > '9')
            return (0);

        ++buff;
    }

    return (1);
}
