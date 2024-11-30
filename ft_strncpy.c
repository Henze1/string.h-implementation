char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    char    *original_dest;

    original_dest = dest;
    while (*src && --n)
    {
        *dest = *src;
        ++dest;
        ++src;
    }

    *dest = '\0';

    return original_dest;
}
