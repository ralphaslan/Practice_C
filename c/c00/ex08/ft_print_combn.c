#include <unistd.h>

void ft_print_combn(int n)
{
    int comb[9];
    int i;

    if (n < 1 || n > 9)
        return;

    for (i = 0; i < n; i++)
        comb[i] = i;

    while (1)
    {
        for (i = 0; i < n; i++)
        {
            char c = comb[i] + '0';
            write(1, &c, 1);
        }

        if (comb[0] == 10 - n)
            break;

        write(1, ", ", 2);

        i = n - 1;
        while (i >= 0 && comb[i] == 9 - (n - 1 - i))
            i--;

        comb[i]++;

        for (int j = i + 1; j < n; j++)
            comb[j] = comb[j - 1] + 1;
    }
}

int main(void)
{
    ft_print_combn(2);
    return 0;
}
