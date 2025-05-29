#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}


int main(void)
{
    int a = 23;
    int b = 5;
    int div, mod;

    ft_div_mod(a, b, &div, &mod);
    printf("%d / %d = %d, remainder = %d\n", a, b, div, mod);

    return 0;
}
