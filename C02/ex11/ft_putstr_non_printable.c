//Simple project mixing everything learn so far.
//It should print a string, swapping all non printable characters by their code in hex after a backslash.
#include <unistd.h>

void    ft_formating(char non_printable)
{
    char    hex[] = "0123456789abcdef";
    int     div = non_printable / 16;
    int     mod = non_printable % 16;

    write(1, "\\", 1);
    write(1, &hex[div], 1);
    write(1, &hex[mod], 1);
}

void    ft_putstr_non_printable(char *str)
{
    while (str[0])
    {
        if (str[0] >= ' ' && str[0] <= '~')
        {
            write(1, &str[0], 1);
        }
        else
        {
            ft_formating(str[0]);
        }
        str++;
    }
}

/*int     main(void)
{
    char    string[] = "Testing string,\t nothing to see here\n";

    ft_putstr_non_printable(string);
    return (0);
}*/
