//In this project one had to write a function to sort any given array of Ints.
//During the piscine i came up with a basic Sellection sort.
//classic solution was bubble sort.
//#include <unistd.h>

void    tf_sort_int_tab(int *tab, int size)
{
    int     i = 0;
    int     j;
    int     lowest;
    int     position;

    while (tab[i])
    {
        lowest = tab[i];
        j = i + 1;
        while (j < size)
        {
            if (lowest > tab[j])
            {
                lowest = tab[j];
                position = j;
            }
            j++;
        }
        if (lowest < tab[i])
        {
            tab[position] = tab[i];
            tab[i] = lowest;
        }
        i++;
    }
}

/*int     main(void)
{
    int     arry[] = {50, 49, 48, 53, 52, 51, 57, 56, 55, 54};

    write(1, arry, 40);
    write(1, "\n", 1);
    tf_sort_int_tab(arry, 10);
    write(1, arry, 40);
    write(1, "\n", 1);
}*/
