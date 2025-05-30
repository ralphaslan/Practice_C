int ft_max(*arr, int size)
{
	int	max;
	int	i;

	max = arr[0];
	i = 1;
	while (i < size)
	{
		if (arr[i]) > max
			max = arr[i];
		i++;
	}
	return (max);
}
