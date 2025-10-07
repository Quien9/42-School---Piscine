//Basic set of exercises, all [ex01 to ex03] can be solved with a simple Write()
//Meant to learn the basics of While() loops and Char/Int tye variables.
#include <unistd.h>

void    ft_print_numbers(void)
{
    char  digit= '0';

    while (digit <= '9')
    {
        write(1, &digit, 1);
        digit++;
    }
}

/*int     main(void)
{
    ft_print_numbers();
    write(1, "\n", 1);
    return 0;
}*/
