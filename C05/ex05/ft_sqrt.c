/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakbas <42kocaeli.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 11:01:35 by uakbas            #+#    #+#             */
/*   Updated: 2023/07/30 14:01:50 by uakbas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i <= nb && i <= 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
