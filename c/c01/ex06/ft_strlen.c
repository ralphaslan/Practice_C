#include <stdio.h>

int	ft_strlen(char *str)
{
	int length

	lenght = 0
	while (str[lenght])
			lenght++;

	return lenght;
}

int main(void)
{
    printf("Length: %d\n", ft_strlen("Hello"));
    return 0;
}
