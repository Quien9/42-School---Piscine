//This function should print any Int type number given.
//Usual solution for this problem uses Long to avoid problems wih limits for Int.
//I decided to convert all positives into negatives instead.
//Usual approach uses recursion printing (nb % 10) and sending (nb / 10) back.
//I decided to store each digit in a String.
#include <unistd.h>

int ft_check_value(int number)
{
    if (number == 0)
    {
        write(1, "0", 1);
        return (1);
    }
    else if (number < 0)
    {
        write(1, "-", 1);
    }
    else
    {
        number = -number;
    }
    return (number);
}

void    ft_putnbr(int nb)
{
    char  str[10];
    int   i = 9;

    nb = ft_check_value(nb);
    while (nb < 0)
    {
        if (nb % 10 < 0)
        {
            str[i] = '0' - (nb % 10);
            nb = nb - (nb % 10);
        }
        else
        {
            nb = nb / 10;
            i--;
        }
    }
    if (nb == 0)
    {
        write(1, &str[i], (10 - i));
    }
}

/*int     main (void)
{
    ft_putnbr(-42);
    write(1, "\n", 1);
    return (0);
}*/
