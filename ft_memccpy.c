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
	while (i < len && ((unsigned char *)src)[i] != ((unsigned char)c))
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	return ((size_t *)src + i);
}
