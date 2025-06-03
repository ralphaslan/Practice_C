int ft_str_is_uppercase(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] < 'A' || str[i] > 'Z')
            return 0;
        i++;
    }
    return 1;
}

#include <stdio.h>

int main(void)
{
    char *test1 = "HELLO";
    char *test2 = "Hello";
    char *test3 = "";
    char *test4 = "UPPERCASE";
    char *test5 = "ABC123";

    printf("\"%s\" -> %d\n", test1, ft_str_is_uppercase(test1));
    printf("\"%s\" -> %d\n", test2, ft_str_is_uppercase(test2));
    printf("\"%s\" -> %d\n", test3, ft_str_is_uppercase(test3));
    printf("\"%s\" -> %d\n", test4, ft_str_is_uppercase(test4));
    printf("\"%s\" -> %d\n", test5, ft_str_is_uppercase(test5));

    return 0;
}
