/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakbas <42kocaeli.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:46:12 by uakbas            #+#    #+#             */
/*   Updated: 2023/07/25 17:20:32 by uakbas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_i;
	unsigned int	src_i;
	unsigned int	savedest;
	unsigned int	savesrc;

	savesrc = 0;
	savedest = 0;
	dest_i = 0;
	src_i = 0;
	while (dest[dest_i])
		dest_i++;
	savedest = dest_i;
	while (src[savesrc])
		savesrc++;
	if (size == 0)
		return (savesrc);
	while (src[src_i] && dest_i < size - 1)
	{
		dest[dest_i] = src[src_i];
		dest_i++;
		src_i++;
	}
	if (savedest < size)
		dest[dest_i] = '\0';
	return (savedest + savesrc);
}
