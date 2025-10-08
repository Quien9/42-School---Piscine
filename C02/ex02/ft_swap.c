//Basic exercise meant to teach how to return multiple values with one function.
//Also shows how to exchange two variable's values without loosing information.
//#include <unistd.h>

void    ft_swap(int *a, int *b)
{
    int     temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

/*int      main(void)
{
    int     first = 'A';
    int     second = 'B';

    write(1, &first, 1);
    write(1, &second, 1);
    write(1, "\n", 1);

    ft_swap(&first, &second);

    write(1, &first, 1);
    write(1, &second, 1);
    write(1, "\n", 1);
}*/
