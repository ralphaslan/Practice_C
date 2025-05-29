#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}


int main(void)
{
    ft_putstr("Hello, 42!\n");
    ft_putstr("This is a test.\n");
    return 0;
}
