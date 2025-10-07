//Basic set of exercises, all [ex01 to ex03] can be solved with a simple Write()
//Meant to learn the basics of While() loops and Char/Int tye variables.
#include <unistd.h>

void    ft_print_alphabet(void)
{
    char    letter = 'a';

    while (letter <= 'z') {
      write(1, &letter, 1);
      letter++;
  }
}

/*int     main(void)
{
    ft_print_alphabet();
    write(1, "\n", 1);
    return (0);
}*/
