//This exercise copies the Strlcat() function
//#include <unistd.h>

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i = 0;
    unsigned int    j = 0;

    while (dest[i] && i < size - 1)
    {
        i++;
    }
    while (src[j] && i + j < size - 1)
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (i + j);
}

/*int     main(void)
{
    char    string[40] = "This is just a";
    char    extra[] = " testing string.\n";
    unsigned int    size;

    size = ft_strlcat(string, extra, 500);
    write(1, string, size);
    return (0);
}*/
