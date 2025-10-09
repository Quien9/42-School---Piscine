//Another basic exercise meant to show us how Return() works.
//#include <unistd.h>

int     ft_strlen(char *str)
{
    int     i = 0;

    while (str[i])
    {
        i++;
    }
    return (i);
}

/*int     main(void)
{
    char    *string = "testing";
    int     size;

    size = ft_strlen(string);
    size = size + '0';
    write(1, &size, 1);
    write(1, "\n", 1);
    return (0);
}*/
