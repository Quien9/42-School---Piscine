//Reproduction of strncat().
//#include <unistd.h>

char    *ft_strcat(char *dest, char *src, unsigned int nb)
{
    unsigned int     i = 0;
    unsigned int     j = 0;
    while (dest[i])
    {
        i++;
    }
    while (src[j] && j < nb)
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}

/*int     main(void)
{
    char    string[60] = "This is a testing string, ";
    char    rest[] = "nothing to see here.\n";
    int     i = 0;

    ft_strncat(string, rest);
    while (string[i])
    {
        write(1, &string[i], 1);
        i++;
    }
    return (0);
}*/
