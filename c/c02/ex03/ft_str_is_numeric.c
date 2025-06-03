int ft_str_is_numeric(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}

#include <stdio.h>

int main(void)
{
    char *test1 = "123456";
    char *test2 = "123abc";
    char *test3 = "";
    char *test4 = "007";
    char *test5 = "42!";

    printf("\"%s\" -> %d\n", test1, ft_str_is_numeric(test1));
    printf("\"%s\" -> %d\n", test2, ft_str_is_numeric(test2));
    printf("\"%s\" -> %d\n", test3, ft_str_is_numeric(test3));
    printf("\"%s\" -> %d\n", test4, ft_str_is_numeric(test4));
    printf("\"%s\" -> %d\n", test5, ft_str_is_numeric(test5));

    return 0;
}
