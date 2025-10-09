//This project must show the content of a memory segment, following a strict format.
//some suboptimal choices were made due the lack of knowlegement, i might revisit in the future.
#include <unistd.h>

void    ft_print_hex(int value)
{
    char    hex[] = "0123456789abcdef";

    write(1, &hex[value], 1);
}

void    ft_content(char *str, unsigned int counter)
{
    int     i = 0;

    while (counter > 0 && i < 16)
    {
        if (str[i] >= ' ' && str[i] <= '~')
        {
        write(1, &str[i], 1);
        }
        else
        {
            write(1, ".", 1);
        }
        i++;
        counter--;
    }
    write(1, "\n", 1);
}

void    ft_hex_block(char *str, unsigned int counter)
{
    int     i = 0;

    while (counter > 0 && i < 16)
    {
        ft_print_hex(str[i] / 16);
        ft_print_hex(str[i] % 16);
        if (i % 2 != 0)
        {
            write(1, " ", 1);
        }
        i++;
        counter--;
    }
    while (i < 16)
    {
        write(1, "  ", 2);
        if (i % 2 != 0)
        {
            write(1, " ", 1);
        }
        i++;
    }
}

void    ft_memmory_block(long long int address_number, int original)
{
    long long int   temp = address_number;

    if(original == 16)//this is just to print the left most 0's.
    {
        while (temp >= 16)
        {
            temp = temp / 16;
            original--;
        }
        while (original > 1)
        {
            write(1, "0", 1);
            original--;
        }
    }
    if(address_number >= 16)
    {
        ft_memmory_block(address_number / 16, 0);
    }
    ft_print_hex(address_number % 16);
}

void    *ft_print_memory(void *addr, unsigned int size)
{
    while (size > 0)
    {
        ft_memmory_block((long long int)addr, 16);//this till print the memmory address for the first element in the segment.
        write(1, ": ", 2);
        ft_hex_block(addr, size);//this will print the segment's content, un hexagessimal, and add a space ever 2 bytes.
        ft_content(addr, size);//this will print the segment's content, unpruntable characters swapped by ".".
        if (size < 16)//tbh i dont know why i need this...
        {
            break;
        }
        addr = addr + 16;
        size = size - 16;
    }
    return (addr);
}

/*int     main(void)
{
    char    string[] = "The quick Indian bat was happily eating cardillo and kiwi.\nThe stork was playing the saxophone behind the straw palenque.\n";
    ft_print_memory(string, 100);
    return (0);
}*/
