/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakbas <42kocaeli.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:53:07 by uakbas            #+#    #+#             */
/*   Updated: 2023/07/30 16:48:14 by uakbas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	ac_i;
	int	av_i;

	av_i = 0;
	ac_i = ac - 1;
	while (av[ac_i] && ac_i > 0)
	{
		while (av[ac_i][av_i])
		{
			write(1, &av[ac_i][av_i], 1);
			av_i++;
		}
		av_i = 0;
		write(1, "\n", 1);
		ac_i--;
	}
	return (0);
}
