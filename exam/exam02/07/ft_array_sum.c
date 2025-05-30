int 	ft_array_sum(int *arr, int size)
{
	int	sum;
	int	i;

	sum = 0;
	i = 0;
	while (i< size)
	{
		sum += arr[i];
		i++;
	}
	return (sum);
}
