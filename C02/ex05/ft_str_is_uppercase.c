//Simple exercises meant to understand more complex comparations and ASCII code.
//[02 to 06] are just variations of the same exercise
//#include <unistd.h>

int     ft_str_is_uppercase(char *str)
{
    while (str[0])
    {
        if (!(str[0] >= 'A' && str[0] <= 'Z'))
        {
            return (0);
        }
        str++;
    }
    return (1);
}

/*int     main(void)
{
    char    string[] = "This is a testing string, n071n6 2C h3r3\n";
    int     check;

    check = ft_str_is_uppercase(string);

    if (check == 1)
    {
        write(1, "Upper\n", 6);
    }
    else
    {
        write(1, "Other\n", 6);
    }
    return (0);
}*/
