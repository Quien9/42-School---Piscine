//This exercse must reproduce the strcmp() function from scratch.
//#include <unistd.h>

int     ft_strcmp(char *s1, char *s2, unsigned int n)
{
    unsigned int     i = 0;

    while (s1[i] == s2[i] && i < n)
    {
        i++;
    }
    return(s1[i] - s2[i]);
}

/*int     main(void)
{
    char    first_string[] = "This is just a testing string, nothing to see here";
    char    second_string[] = "This is just another testing string";

    if (ft_strncmp(first_string, second_string, 14) > 0)
    {
        write(1, "first\n", 6);
    }
    else if (ft_strncmp(first_string, second_string, 14) < 0)
    {
        write(1, "second\n", 7);
    }
    else
    {
        write(1, "none\n", 5);
    }
    return (0);
}*/
