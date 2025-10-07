//Simple excercise to understand the structure needed for a C program,
//Write() command, the only allowed function to show informatin on the terminal
#include <unistd.h>

void    ft_putchar(char c)
{
  write(1, &c, 1);
}

/*int     main(void)
{
  char  character = 'Z';

  ft_putchar(character);
  write(1, "\n", 1);
  return 0;
}*/
