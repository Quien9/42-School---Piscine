//Simple project that must invert the order for any given array of Int.
//#include <unistd.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int     temp;
    int     i = 0;
    int     j = size - 1;

    size = size / 2;
    while (i <= size)
    {
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
        i++;
        j--;
    }
}

/*int     main(void)
{
    int     arry[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
    write(1, arry, 40);
    write(1, "\n", 1);
    ft_rev_int_tab(arry, 10);
    write(1, arry, 37);
    write(1, "\n", 1);
}*/
