//reproduction of strstr() function.
//#include <unistd.h>

char    *ft_strstr(char *str, char *to_find)
{
    int     i = 0;
    int     j;

    while (str[i])
    {
        j = 0;
        while (str[i + j] == to_find[j])
        {
            j++;
            if (!to_find[j])
            {
                return(&str[i]);
            }
        }
        i++;
    }
    return (0);
}

/*int     main(void)
{
    char    hay_stack[] = "This is just a testing string, nothing to see here\n";
    char    needle[] = "not";

    write(1, ft_strstr(hay_stack, needle), 20);
}*/
