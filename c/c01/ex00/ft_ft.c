#include <stdio.h>

void	ft_fr(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
    int x = 0;
    ft_ft(&x);
    printf("x = %d\n", x);
    return 0;
}
