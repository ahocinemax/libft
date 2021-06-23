/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <ahocine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:29:22 by ahocine           #+#    #+#             */
/*   Updated: 2021/06/23 14:28:43 by ahocine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (len < 1)
		return (NULL);
	while (*(unsigned char *)(src + i) != (unsigned char)c && i < len)
		i++;
	if (*(unsigned char *)(src + i) == (unsigned char)c && src + i)
	{
		ft_memcpy(dest, src, i + 1);
		return ((void *)(dest + i + 1));
	}
	else
		ft_memcpy(dest, src, i);
	return (NULL);
}
