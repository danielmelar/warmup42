int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	count;

	factorial = 1;
	count = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (count <= nb)
	{
		factorial = factorial * count;
		count++;
	}
	return (factorial);
}
