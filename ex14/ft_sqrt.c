int	ft_sqrt(int nb)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (nb < 2147395600)
	{
		while (i < nb)
		{
			j = i * i;
			if (j == nb)
				return (i);
			i++;
		}
		return (0);
	}
}
