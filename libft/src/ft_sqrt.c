int	ft_pow(int nb, int pow);

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (ft_pow(i, 2) <= nb)
	{
		i++;
	}
	return (i - 1);
}
