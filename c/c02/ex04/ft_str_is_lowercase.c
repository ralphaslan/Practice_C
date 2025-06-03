int ft_str_is_lowercase(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] < 'a' || str[i] > 'z')
            return 0;
        i++;
    }
    return 1;
}

#include <stdio.h>

int main(void)
{
    char *test1 = "hello";
    char *test2 = "Hello";
    char *test3 = "";
    char *test4 = "lowercase";
    char *test5 = "abc123";

    printf("\"%s\" -> %d\n", test1, ft_str_is_lowercase(test1));
    printf("\"%s\" -> %d\n", test2, ft_str_is_lowercase(test2));
    printf("\"%s\" -> %d\n", test3, ft_str_is_lowercase(test3));
    printf("\"%s\" -> %d\n", test4, ft_str_is_lowercase(test4));
    printf("\"%s\" -> %d\n", test5, ft_str_is_lowercase(test5));

    return 0;
}
