/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakbas <42kocaeli.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:43:37 by uakbas            #+#    #+#             */
/*   Updated: 2023/07/30 14:51:57 by uakbas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	ac_i;
	int	av_i;

	ac_i = 1;
	av_i = 0;
	if (ac == 1)
		return (0);
	while (av[ac_i])
	{
		while (av[ac_i][av_i])
		{
			write(1, &av[ac_i][av_i], 1);
			av_i++;
		}
		av_i = 0;
		write(1, "\n", 1);
		ac_i++;
	}
	return (0);
}
