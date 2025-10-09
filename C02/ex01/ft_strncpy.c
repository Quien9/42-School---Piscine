//Reproduced the behavior showed by Strncpy() using manual.
//#include <unistd.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int     i = 0;

    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i <= n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

/*int     main(void)
{
    char    starting[] = "Testing string, nothing to see here\n";
    char    copy[] = "Here be dragons\n";
    int     i = 0;

    ft_strncpy(copy, starting, 42);
    while (copy[i])
    {
        write(1, &copy[i], 1);
        i++;
    }
    return (0);
}*/
