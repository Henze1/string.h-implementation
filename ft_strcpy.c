char *ft_strcpy(char *dest, char *src) {
    char *original_dest = dest;
    int size_src;
    int size_dest;

    size_src = 0;
    size_dest = 0;
    while (src[size_src] != '\0')
    {
        ++size_src;
    }

    while (dest[size_dest] != '\0')
    {
        ++size_dest;
    }

    if (size_src > size_dest)
        return NULL;

    while (*src)
    {
        *dest = *src;
        ++dest;
        ++src;
    }
    *dest = '\0';

    return original_dest;
}
