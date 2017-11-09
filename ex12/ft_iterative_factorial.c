int		ft_iterative_factorial(int nb)
{
	int i;
	i = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		nb -= 1;
		i = i * nb;
	}
	return (i);
}
