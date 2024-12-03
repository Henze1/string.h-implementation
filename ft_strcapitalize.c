char *ft_strcapitalize(char *str)
{
    char *buff;

    buff = str;
    if (*buff > 'a' && *buff < 'z') *buff -= 32;
    buff++;
    while (*buff)
    {
        if (*(buff - 1) == ' ' && *buff >= 'a' && *buff <= 'z')
            *buff -= 32;
        else if (*buff >= 'A' && *buff <= 'Z')
            *buff += 32;

        buff++;
    }

    return str;
}
