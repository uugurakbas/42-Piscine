/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakbas <42kocaeli.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:04:06 by uakbas            #+#    #+#             */
/*   Updated: 2023/07/15 17:06:48 by uakbas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_int_to_char(int n)
{
	char	a;

	a = (n / 10) + '0';
	write(1, &a, 1);
	a = (n % 10) + '0';
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_int_to_char(x);
			write (1, " ", 1);
			ft_int_to_char(y);
			if (x != 98)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
