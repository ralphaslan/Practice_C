int ft_str_is_printable(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] < 32 || str[i] > 126)
            return 0;
        i++;
    }
    return 1;
}

#include <stdio.h>

int main(void)
{
    char *test1 = "Hello, World!";
    char *test2 = "Printable123";
    char *test3 = "";
    char test4[] = "Test\x1F";
    char test5[] = "OK\n";

    printf("\"%s\" -> %d\n", test1, ft_str_is_printable(test1));
    printf("\"%s\" -> %d\n", test2, ft_str_is_printable(test2));
    printf("\"%s\" -> %d\n", test3, ft_str_is_printable(test3));
    printf("Test with ASCII 31 -> %d\n", ft_str_is_printable(test4));
    printf("Test with newline -> %d\n", ft_str_is_printable(test5));

    return 0;
}
