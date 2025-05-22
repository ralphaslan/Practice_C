#include <unistd.h>

void ft_print_comb2(void)
{
    int a = 0;
    int b;

    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            char output[5];

            output[0] = a / 10 + '0';
            output[1] = a % 10 + '0';
            output[2] = ' ';
            output[3] = b / 10 + '0';
            output[4] = b % 10 + '0';

            write(1, output, 5);

            if (!(a == 98 && b == 99))
                write(1, ", ", 2);

            b++;
        }
        a++;
    }
}

int main(void)
{
    ft_print_comb2();
    return 0;
}
