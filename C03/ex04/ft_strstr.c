/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakbas <42kocaeli.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:27:24 by uakbas            #+#    #+#             */
/*   Updated: 2023/07/25 16:49:17 by uakbas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	else
	{
		while (str[i])
		{
			j = 0;
			if (str[i] == to_find[0])
			{
				while (str[i + j] == to_find[j])
				{
					if (to_find[j + 1] == '\0')
						return (&str[i]);
					else
						j++;
				}
			}
			i++;
		}
	}
	return (0);
}
