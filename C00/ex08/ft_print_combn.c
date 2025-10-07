//Based on ex05, where instead ot taking 3 elements, it works for N, [1 to 10].
//N outside the valid range is left undefined.
//Solved by itarating over an initial string with all elements, and comparing with another string with the last value
#include <unistd.h>

void    ft_get_limit(int n, char *str, char *limit)
{
    int     i = 10 - n;
    int     j = 0;

    while (i <= 10)
    {
        limit[j] = str[i];
        i++;
        j++;
    }
    limit[j] = '\0';
    str[n] = '\0';
}

void    ft_formating(int n, char *str)
{
    write(1, str, n);
    if (str[0] + str[n - 1] != 115 - n/*10 - n + 9 + (2 * 48)*/)
    {
        write(1, ", ", 2);
    }
}

void    ft_print_combn(int n)
{
    char    str[] = "0123456789";
    char    limit[n];
    int     i = n - 1;

    ft_get_limit(n, str, limit);
    while (i >= 0)
    {
        if (str[i] < limit[i])
        {
            ft_formating(n, str);
            str[i]++;
            while (i < n - 1)
            {
                str[i + 1] = str[i] + 1;
                i++;
            }
        }
        else
        {
            i--;
        }
    }
    ft_formating(n, limit);
}

/*int     main(void)
{
    ft_print_combn(4);
    write(1, "\n", 1);
    return (0);
}*/
