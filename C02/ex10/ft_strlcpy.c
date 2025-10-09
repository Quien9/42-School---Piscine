//Reproduced the behavior showed by Strlcpy() using manual.
//#include <unistd.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int     i = 0;

    while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    while (src[i])
    {
        i++;
    }
    return (i);
}

/*int     main(void)
{
    char    starting[] = "Testing string, nothing to see here\n";
    char    copy[] = "Here be dragons\n";
    int     size;

    size = ft_strlcpy(copy, starting, 37);
    write(1, copy, size);
    return (0);
}*/
