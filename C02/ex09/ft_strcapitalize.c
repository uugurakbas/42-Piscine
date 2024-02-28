/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakbas <42kocaeli.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:06:10 by uakbas            #+#    #+#             */
/*   Updated: 2023/07/24 10:55:34 by uakbas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_lowercase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < 65 || str[i - 1] > 122)
			{
				if (str[i - 1] < 48 || str[i - 1] > 57)
					str[i] -= 32;
			}
			else if (str[i - 1] > 90 && str[i - 1] < 97)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
