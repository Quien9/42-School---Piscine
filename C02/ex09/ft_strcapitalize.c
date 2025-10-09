//First real project on C02, mixes everything learnt about string manipulation and ASCII code so far.
// Program must capitalize every alphanumerical words in the string, while ensuring the rest is lowercase.
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

char    *ft_strcapitalize(char *str)
{
    int     in_n_out = 1;//boolean to keep track if we are in or out of a 'word'

    ft_strlowcase(str);
    while (str[0])
    {
        if ((str[0] >= 'a' && str[0] <= 'z') && in_n_out == 1)
        {
            str[0] = str[0] - 32;
            in_n_out = 0;
        }
        else if (str[0] >= '0' && str[0] <= '9')
        {
            in_n_out = 0;
        }
        else if (!(str[0] >= 'a' && str[0] <= 'z'))
        {
            in_n_out = 1;
        }
        str++;
    }
    return (str);
}

/*int     main(void)
{
    char    string[] = "This is a testing string, n071n6 2C h3r3\n";

    write(1, string, 41);
    ft_strcapitalize(string);
    write(1, string, 41);
    return (0);
}*/
