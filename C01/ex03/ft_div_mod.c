//this exercise allowed us to understand some of the aritmetic with Int type variables.
//#include <unistd.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

/*int     main(void)
{
    int module;
    int dividend;

    ft_div_mod(45, 10, &dividend, &module);
    module = module + '0';
    dividend = dividend + '0';
    write(1, &dividend, 1);
    write(1, " - ", 3);
    write(1, &module, 1);
    write(1, "\n", 1);
}*/
