//First real exercise, required the use of nested loops, and multiple variables
//required to print the combinatory of 3 elements, ordered from lowest.
#include <unistd.h>

void    ft_formating(char *str)
{
    write(1, str, 3);
    if (str[0] < '7')
    {
        write(1, ", ", 2);
    }
}

void    ft_print_comb(void)
{
    char    str[] = "012";

    while (str[0] <= '7')
    {
        while (str[1] <= '8')
        {
            while (str[2] <= '9')
            {
                ft_formating(str);
                str[2]++;
            }
            str[1]++;
            str[2] = str[1] + 1;
        }
        str[0]++;
        str[1] = str[0] + 1;
        str[2] = str[1] + 1;
    }
}

/*int     main(void)
{
    ft_print_comb();
    write(1, "\n", 1);
    return 0;
}*/
