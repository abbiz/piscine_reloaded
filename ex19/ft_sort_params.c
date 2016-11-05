void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}

void	ft_swap(char *s1, char *s2)
{
	char tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int		main(int argc, char **argv)
{
	int		find;
	int		i;

	find = 1;
	while (find)
	{
		find = 0;
		i = 0;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(argv[i], argv[i + 1]);
				find = 1;
			}
		}
	}
	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]), ft_putchar('\n');
	return (0);
}

