int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') ||
		(str[i] >= 'a' && str[i] <= 'z')))
		{
			return 0;
		}
		i++;
	}
	return 1;
}

#include <stdio.h>

int main(void)
{
    char *test1 = "Yunus";
    char *test2 = "a1";
    char *test3 = "";
    char *test4 = "aa";
    char *test5 = "a a";

    printf("\"%s\" -> %d\n", test1, ft_str_is_alpha(test1));
    printf("\"%s\" -> %d\n", test2, ft_str_is_alpha(test2));
    printf("\"%s\" -> %d\n", test3, ft_str_is_alpha(test3));
    printf("\"%s\" -> %d\n", test4, ft_str_is_alpha(test4));
    printf("\"%s\" -> %d\n", test5, ft_str_is_alpha(test5));

    return 0;
}
