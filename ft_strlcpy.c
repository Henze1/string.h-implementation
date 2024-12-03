unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int cpy_size;
    int src_size;
    char *src_buff;

    cpy_size = 0;
    src_buff = src;
    src_size = 0;

    while (*src_buff)
    {
        src_size++;
        src_buff++;
    }

    if (size > 0)
    {
        if (src_size >= size)
            cpy_size = size - 1;
        else
            cpy_size = src_size;


        while (cpy_size)
        {
            *dest = *src;
            ++dest;
            ++src;
            --cpy_size;
        }

        *dest = '\0';
    }

    return src_size;
}
