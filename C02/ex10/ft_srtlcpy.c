/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srtlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakbas <42kocaeli.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:59:31 by uakbas            #+#    #+#             */
/*   Updated: 2023/07/24 11:14:51 by uakbas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int	srcsize;

	srcsize = 0;
	while (src[srcsize])
	{
		srcsize++;
	}
	return (srcsize);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen (src));
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
