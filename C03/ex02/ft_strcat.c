/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakbas <42kocaeli.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:15:49 by uakbas            #+#    #+#             */
/*   Updated: 2023/07/24 16:52:55 by uakbas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	src_i;
	int	dest_i;

	src_i = 0;
	dest_i = 0;
	while (dest[dest_i])
	{
		dest_i++;
	}
	while (src[src_i])
	{
		dest[dest_i] = src[src_i];
		src_i++;
		dest_i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}
