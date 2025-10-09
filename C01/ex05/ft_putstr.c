//Simple exercise to incorporate the concept of arrays.
//Decided to test diferent ways to achive the asked behaviour, only the classic is uncommented.
#include <unistd.h>

void    ft_putstr(char *str)
{
    int     i = 0;

    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

/*void    ft_putstr_b(char *str)
{
    while (str[0])//this method changes the starting point of the array instead of an iterator.
    {
        write(1, &str[0], 1);
        str++;
    }
}*/

/*void    ft_putstr_c(char *str)
{
    int     i = 0;

    while (str[i])//this method is better when you know the size of the string beforehand.
    {
        i++;
    }
    write(1, str, i);
}*/

/*int     main(void)
{
    char    *string = "this is just a testing string, nothing to see here.\n";

    ft_putstr(string);
    //ft_putstr_b(string);//this one is my favourite
    //ft_putstr_c(string);
    return (0);
}*/
