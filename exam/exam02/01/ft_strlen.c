int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

#include <stdio.h>

int main(void)
{
	printf("Lenght: %d\n", ft_strlen("hello"));
	return (0);
}
