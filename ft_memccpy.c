/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <ahocine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:29:22 by ahocine           #+#    #+#             */
/*   Updated: 2021/05/31 15:30:06 by ahocine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (len < 1 || !(ft_memchr(src, c, len)))
		return (NULL);
	while (*(unsigned char *)(src + i) != (unsigned char)c && i < len)
		i++;
	ft_memcpy(dest, src, i + 1);
	return ((void *)(dest + i + 1));
}
