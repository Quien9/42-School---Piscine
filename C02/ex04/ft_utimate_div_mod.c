//Variation of last exercise, mixing use of pointers and swaping values without loosing information.
//#include <unistd.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int     temp;

    temp = *a / *b;
    *b = *a % *b;
    *a = temp;
}

/*int     main(void)
{
    int     div = 42;
    int     mod = 12;

    ft_ultimate_div_mod(&div, &mod);
    div = div + '0';
    mod = mod + '0';
    write(1, &div, 1);
    write(1, " - ", 3);
    write(1, &mod, 1);
    write(1, "\n", 1);
}*/
