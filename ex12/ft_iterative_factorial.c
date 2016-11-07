/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:49:51 by abizeau           #+#    #+#             */
/*   Updated: 2016/11/07 13:49:52 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb == 0)
		return (1);
	if (nb >= 1 && nb <= 12)
	{
		i = 1;
		res = 1;
		while (nb >= i)
		{
			res = res * i;
			i++;
		}
		return (res);
	}
	else
		return (0);
}
