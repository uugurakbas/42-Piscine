/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakbas <42kocaeli.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:44:28 by uakbas            #+#    #+#             */
/*   Updated: 2023/07/27 12:39:10 by uakbas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	p_n;

	nb = 0;
	p_n = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			nb = (nb * 10) + (str[i] - '0');
		else if (str[i - 1] >= '0' && str[i - 1] <= '9')
			break ;
		else if (str[i] == '-')
			p_n++;
		i++;
	}
	if (p_n % 2 != 0)
		nb = -nb;
	return (nb);
}
