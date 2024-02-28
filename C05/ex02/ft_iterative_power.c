/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakbas <42kocaeli.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:59:40 by uakbas            #+#    #+#             */
/*   Updated: 2023/07/27 17:19:26 by uakbas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	cons;
	int	n;

	n = 0;
	i = 0;
	cons = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		cons = cons * nb;
		i++;
	}
	return (cons);
}
