//Simple exercise focused on string manipulation and ASCII code.
//[ex06 and ex07] are just variations of the same concept.
//#include <unistd.h>

char    *ft_strlowcase(char *str)
{
    while (str[0])
    {
        if (str[0] >= 'A' && str[0] <= 'Z')
        {
            str[0] = str[0] + 32;
        }
        str++;
    }
    return (str);
}

/*int     main(void)
{
    char    string[] = "This is a testing string, n071n6 2C h3r3\n";

    write(1, string, 41);
    ft_strlowcase(string);
    write(1, string, 41);
    return (0);
}*/
