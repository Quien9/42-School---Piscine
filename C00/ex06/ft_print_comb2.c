//variation of last exercise.
//must print conbinations of two numbers with two digits.
#include <unistd.h>

void    ft_formating(int a, int b, int c, int d)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, " ", 1);
    write(1, &c, 1);
    write(1, &d, 1);
    if (a + b + c + d < 227 /*(8 +(3 * 9) + (4 * 48))*/)
    {
        write(1, ", ", 2);
    }
}

void    ft_print_comb2(void)
{
    int   first = 0;
    int   second = 1;

    while (first < 99)
    {
        while (second <= 99)
        {
            ft_formating(first / 10 + '0', first % 10 + '0', second / 10 + '0', second % 10 + '0');
            second++;
        }
        first++;
        second = first + 1;
    }
}

/*int     main(void)
{
    ft_print_comb2();
    write(1, "\n", 1);
    return (0);
}*/
