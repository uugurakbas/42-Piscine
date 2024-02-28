/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakbas <42kocaeli.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:51:51 by uakbas            #+#    #+#             */
/*   Updated: 2023/07/31 12:11:29 by uakbas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int ac, char **av)
{
	int	i;
	int	l;

	i = 1;
	if (ac == 1)
		return (0);
	while (av[i] && i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
			ft_swap(&av[i], &av[i + 1]);
		i++;
	}
	i = 1;
	while (av[i])
	{
		l = 0;
		while (av[i][l])
		{
			write(1, &av[i][l], 1);
			l++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
