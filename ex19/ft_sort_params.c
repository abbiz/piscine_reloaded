/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:53:39 by abizeau           #+#    #+#             */
/*   Updated: 2016/11/07 18:41:16 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

void	ft_print_params(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		j;
	char	*temp;

	j = 1;
	while (j + 1 <= argc - 1)
	{
		if (ft_strcmp(argv[j], argv[j + 1]) > 0)
		{
			temp = argv[j + 1];
			argv[j + 1] = argv[j];
			argv[j] = temp;
			j = 1;
		}
		else
			j++;
	}
	ft_print_params(argv);
	return (0);
}
