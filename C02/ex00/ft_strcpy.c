//Reproduced the behavior showed by Strcpy() using manual.
//#include <unistd.h>

char    *ft_strcpy(char *dest, char *src)
{
    int     i = 0;

    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

/*int     main(void)
{
    char    starting[] = "Testing string, nothing to see here\n";
    char    copy[] = "Here be dragons\n";
    int     i = 0;

    ft_strcpy(copy, starting);
    while (copy[i])
    {
        write(1, &copy[i], 1);
        i++;
    }
    return (0);
}*/
