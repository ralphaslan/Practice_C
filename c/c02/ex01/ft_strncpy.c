char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int 	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while ( i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char src[] = "yunus";
	char dest[10];

	ft_strncpy(dest, src, 8);

	printf("src: %s\n", src);
	printf("dest; ");
	for (int i = 0; i < 10; i++)
	{
		if (dest[i] == '\0')
			printf("\\0");
		else
			printf("%c", dest[i]);
	}
	printf("\n");

	return (0);
}
*/
