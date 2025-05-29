#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    if (*b != 0)
    {
        int temp = *a;
        *a = temp / *b;
        *b = temp % *b;
    }
}

int main(void)
{
    int x = 23;
    int y = 5;

    ft_ultimate_div_mod(&x, &y);
    printf("Quotient = %d, Remainder = %d\n", x, y);

    return 0;
}
